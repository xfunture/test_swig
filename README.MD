### 如何使用swig将c++代码生成pythond代码  

1. 准备好c++代码  
一个头文件，一个.cpp 文件  
 
2. 编写swig 规则文件example.i  
该规则文件用于告诉swig 生成什么样的python 库，包含哪些c++头文件，参数传递规则  
%module example        命名python 模块的的名称  
%include typemaps.i    typemaps.i是引入swig的类型映射,支持c++中的引用类型  
执行swig -c++ -python example.i  

3. 编写setup.py 文件，用于编译c++ 代码  
编译:python setup.py build_ext --inplace  

5. 直接在python 中调用相应的python 库  
main.py  