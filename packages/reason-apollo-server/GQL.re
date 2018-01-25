/*
 how do we make typing the resolvers easy since it has unknown keys?
 */
type schema = {
  typeDefs: string,
  resolvers: string
};

let makeExecutableSchema = ({typeDefs, resolvers}) =>
  JSGraphQLTools.makeExecutableSchema({
    "typeDefs": typeDefs,
    "resolvers": resolvers
  });