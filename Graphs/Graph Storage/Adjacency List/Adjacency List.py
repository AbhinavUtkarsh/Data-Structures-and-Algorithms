class AdjNode:
    def __init__(self, value):
        self.vertex = value
        self.next = None


class Graph:
    def __init__(self, size):
        self.V = size
        self.graph = [None] * self.V

    def add_edge(self, v1, v2):
        node = AdjNode(v1)
        node.next = self.graph[v2]
        self.graph[v2] = node

        node = AdjNode(v2)
        node.next = self.graph[v1]
        self.graph[v1] = node

    def display(self):
        for i in range(self.V):
            print("Vertex: " + str(i) + " : ", end=" ")
            temp = self.graph[i]
            while temp:
                print("-->{}".format(temp.vertex), end=" ")
                temp = temp.next
            print()
            print()


if __name__ == "__main__":
    V = 5
    g = Graph(V)
    g.add_edge(0, 3)
    g.add_edge(3, 2)
    g.add_edge(2, 1)
    g.add_edge(0, 2)

    g.display()

