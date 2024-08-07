'''
 * @author Md. Sohanuzzaman Soad
 * @email mdsoad@gmail.com
 * @university  University of Asia Pacific, Bangladesh
 * @create date 2022-07-02 16:47:51
 * @modify date 2022-07-02 16:49:22
'''


polyhedronSides = {"Tetrahedron": 4, "Cube": 6,
                "Octahedron": 8, "Dodecahedron": 12, "Icosahedron": 20}
n = int(input())
sideCount = 0
for _ in range(n):
    polyhedron = input()
    sideCount += polyhedronSides[polyhedron]

print(sideCount)
