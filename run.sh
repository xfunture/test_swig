swig -c++ -python example.i
python setup.py build_ext --inplace
python main.py
