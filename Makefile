all:
	@if [ ! -d build ]; then mkdir build; fi
	@echo "Building TensorFlow Kotlin JNI binding library.."
	@gcc -o build/libtensorflow_c_api.so \
		src/tensorflow_api.c \
		-shared -fPIC \
		-I include \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux \
		-ltensorflow \
		&& echo "Success!"

clean:
	@if [ -d build ]; then rm -rf build; fi
