let schema =
  GraphQLTools.mergeSchemas({
    schemas: (
      GraphQLTools.makeExecutableSchema(Users.schema),
      GraphQLTools.makeExecutableSchema(Posts.schema)
    )
  });