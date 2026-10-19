// Fill out your copyright notice in the Description page of Project Settings.


#include "Reticle.h"
#include"Engine/Canvas.h"
#include"Engine/Texture2D.h"

void AReticle::DrawHUD() {
	Super::DrawHUD();

	if (!Canvas || !ReticleTexture) return;

	const FVector2D Center(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);
	const FVector2D TextureHalfSize(ReticleTexture->GetSizeX() * 0.5f, ReticleTexture->GetSizeY() * 0.5f);
	const FVector2D DrawPosition(Center.X - TextureHalfSize.X, Center.Y - TextureHalfSize.Y);

	FCanvasTileItem TileItem(DrawPosition, ReticleTexture->GetResource(), FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);
}
