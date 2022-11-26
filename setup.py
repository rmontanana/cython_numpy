"""

    Calling
    $python setup.py build_ext --inplace
    will build the extension library in the current file.

"""
from distutils.core import setup, Extension
from Cython.Build import cythonize

setup(
    ext_modules=cythonize(
        Extension(
            "fimdlp", 
            sources=["cfimdlp.pyx", "FImdlp.cpp"],  
            language="c++",  
        )
    )
)


