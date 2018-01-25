/*
 how do we make typing the resolvers easy since it has unknown keys?
 */
type schema = {
  typeDefs: string,
  resolvers: string
};

let makeExecutableSchema = ({typeDefs, resolvers}) => {
  let schema = {"typeDefs": typeDefs, "resolvers": resolvers};
  JSGraphQLTools.makeExecutableSchema(schema);
};