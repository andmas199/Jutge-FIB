
void node_maxim(node_arbreNari* n, T& k) const {
    k = n->info;
    for(int i = 0; i < N; ++i) {
        T aux;
        if (n->seg[i] != nullptr) {
            node_maxim(n->seg[i], aux);
            if (k < aux) k = aux;
        }
    }
}

T maxim() const
/* Pre: el p.i. no és buit */
/* Post: el resultat indica el valor més gran que conté el p.i. */
{
    T k;
    node_maxim(primer_node, k);
    return k;
}


