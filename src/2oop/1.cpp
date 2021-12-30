// object = Entity
// object visible or invisible
// 对象就是变量
// 对象以变量的形式出现
// 对象= 属性 + 服务
// 动态 静态
/**
 data：properties or status
 operation :functions
 * 组织设计和实现
 */

class Point3d
{
public:
    Point3d(float x, float y, float z);
    void print();

private:
    float x;
    float y;
    float z;
};
Point3d a(1, 2, 3);
a.print();
