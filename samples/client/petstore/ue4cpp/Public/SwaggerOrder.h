/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */
#pragma once

#include "SwaggerBaseModel.h"

namespace Swagger 
{

/*
 * SwaggerOrder
 *
 * An order for a pets from the pet store
 */
class SWAGGER_API SwaggerOrder : public Model
{
public:
    virtual ~SwaggerOrder() {}
	bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<int64> Id;
	TOptional<int64> PetId;
	TOptional<int32> Quantity;
	TOptional<FDateTime> ShipDate;
	enum class StatusEnum
	{
		Placed,
		Approved,
		Delivered,
  	};
	/* Order Status */
	TOptional<StatusEnum> Status;
	TOptional<bool> Complete;
};

}
