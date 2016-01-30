// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ShopItem.generated.h"

UCLASS()
class GAMEJAMTROLLY_API AShopItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShopItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	/** Return the mesh for the pickup */
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return ShopItemMesh; }

	/** Return whether or not the pickup is active */
	UFUNCTION(BlueprintPure, Category = "ShopItem")
	int32 GetPrice();
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetPrice(int32 NewPrice);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ShopItem", meta = (AllowPrivateAccess = "true"))
	int32 Price;

private:
	/** Static mesh to represent the pickup in the level*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ShopItem", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShopItemMesh;



	
	
};
