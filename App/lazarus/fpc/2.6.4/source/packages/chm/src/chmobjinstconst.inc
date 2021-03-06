{ Copyright (C) <2005> <Andrew Haines> chmobjinstconst.inc

  This library is free software; you can redistribute it and/or modify it
  under the terms of the GNU Library General Public License as published by
  the Free Software Foundation; either version 2 of the License, or (at your
  option) any later version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Library General Public License
  for more details.

  You should have received a copy of the GNU Library General Public License
  along with this library; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
}
{
  See the file COPYING.FPC, included in this distribution,
  for details about the copyright.
}
type
  TObjInstEntry = array[0..9] of Byte;

const
  ObjInstEntries: array [0..255] of TObjInstEntry =(
($00,$00,$00,$00,$00,$00,$00,$00,$00,$00),
($07,$00,$01,$00,$01,$01,$01,$01,$00,$00),
($00,$00,$02,$00,$02,$02,$02,$02,$00,$00),
($00,$00,$03,$00,$03,$03,$03,$03,$00,$00),
($00,$00,$04,$00,$04,$04,$04,$04,$00,$00),
($00,$00,$05,$00,$05,$05,$05,$05,$00,$00),
($00,$00,$06,$00,$06,$06,$06,$06,$00,$00),
($00,$00,$07,$00,$07,$07,$07,$07,$00,$00),
($00,$00,$08,$00,$08,$08,$08,$08,$00,$00),
($00,$00,$09,$00,$09,$09,$09,$09,$00,$00),
($00,$00,$0A,$00,$0A,$0A,$0A,$0A,$00,$00),
($00,$00,$0B,$00,$0B,$0B,$0B,$0B,$00,$00),
($00,$00,$0C,$00,$0C,$0C,$0C,$0C,$00,$00),
($00,$00,$0D,$00,$0D,$0D,$0D,$0D,$00,$00),
($00,$00,$0E,$00,$0E,$0E,$14,$14,$00,$00),
($00,$00,$0F,$00,$0F,$0F,$0F,$0F,$00,$00),
($00,$00,$10,$00,$10,$10,$10,$10,$00,$00),
($00,$00,$11,$00,$11,$11,$11,$11,$00,$00),
($00,$00,$12,$00,$12,$12,$12,$12,$00,$00),
($00,$00,$13,$00,$13,$13,$13,$13,$00,$00),
($00,$00,$20,$00,$14,$14,$14,$14,$00,$00),
($00,$00,$15,$00,$15,$15,$15,$15,$00,$00),
($00,$00,$16,$00,$16,$16,$16,$16,$00,$00),
($00,$00,$17,$00,$17,$17,$17,$17,$00,$00),
($00,$00,$18,$00,$18,$18,$18,$18,$00,$00),
($00,$00,$19,$00,$19,$19,$19,$19,$00,$00),
($00,$00,$1A,$00,$1A,$1A,$1A,$1A,$00,$00),
($00,$00,$1B,$00,$1B,$1B,$1B,$1B,$00,$00),
($00,$00,$1C,$00,$1C,$1C,$1C,$1C,$00,$00),
($00,$00,$1D,$00,$1D,$1D,$1D,$1D,$00,$00),
($00,$00,$1E,$00,$1E,$1E,$1E,$1E,$00,$00),
($00,$00,$1F,$00,$1F,$1F,$1F,$1F,$00,$00),
($00,$00,$20,$00,$20,$20,$20,$20,$00,$00),
($00,$00,$23,$00,$21,$21,$21,$21,$00,$00),
($00,$00,$28,$00,$22,$22,$22,$22,$00,$00),
($00,$00,$2D,$00,$23,$23,$23,$23,$00,$00),
($00,$00,$32,$00,$24,$24,$24,$24,$00,$00),
($00,$00,$37,$00,$25,$25,$25,$25,$00,$00),
($00,$00,$3C,$00,$26,$26,$26,$26,$00,$00),
($06,$00,$41,$00,$27,$27,$27,$27,$00,$00),
($00,$00,$46,$00,$28,$28,$28,$28,$00,$00),
($00,$00,$4B,$00,$29,$29,$29,$29,$00,$00),
($09,$00,$50,$00,$2A,$2A,$2A,$2A,$00,$00),
($00,$00,$55,$00,$2B,$2B,$2B,$2B,$00,$00),
($04,$00,$5A,$00,$2C,$2C,$2C,$2C,$00,$00),
($00,$00,$5F,$00,$2D,$2D,$2D,$2D,$00,$00),
($05,$00,$64,$00,$2E,$2E,$2E,$2E,$00,$00),
($00,$00,$69,$00,$2F,$2F,$2F,$2F,$00,$00),
($03,$00,$60,$04,$30,$30,$30,$30,$00,$00),
($03,$00,$6A,$04,$31,$31,$31,$31,$00,$00),
($03,$00,$74,$04,$32,$32,$32,$32,$00,$00),
($03,$00,$7E,$04,$33,$33,$33,$33,$00,$00),
($03,$00,$88,$04,$34,$34,$34,$34,$00,$00),
($03,$00,$92,$04,$35,$35,$35,$35,$00,$00),
($03,$00,$9C,$04,$36,$36,$36,$36,$00,$00),
($03,$00,$A6,$04,$37,$37,$37,$37,$00,$00),
($03,$00,$B0,$04,$38,$38,$38,$38,$00,$00),
($03,$00,$BA,$04,$39,$39,$39,$39,$00,$00),
($00,$00,$6E,$00,$3A,$3A,$3A,$3A,$00,$00),
($00,$00,$73,$00,$3B,$3B,$3B,$3B,$00,$00),
($00,$00,$78,$00,$3C,$3C,$3C,$3C,$00,$00),
($00,$00,$7D,$00,$3D,$3D,$3D,$3D,$00,$00),
($00,$00,$82,$00,$3E,$3E,$3E,$3E,$00,$00),
($09,$00,$87,$00,$3F,$3F,$3F,$3F,$00,$00),
($00,$00,$8C,$00,$40,$40,$40,$40,$00,$00),
($02,$00,$CE,$04,$61,$41,$41,$41,$00,$00),
($02,$00,$E2,$04,$62,$42,$42,$42,$00,$00),
($02,$00,$F6,$04,$63,$43,$43,$43,$00,$00),
($02,$00,$0A,$05,$64,$44,$44,$44,$00,$00),
($02,$00,$1E,$05,$65,$45,$45,$45,$00,$00),
($02,$00,$32,$05,$66,$46,$46,$46,$00,$00),
($02,$00,$46,$05,$67,$47,$47,$47,$00,$00),
($02,$00,$5A,$05,$68,$48,$48,$48,$00,$00),
($02,$00,$6E,$05,$69,$49,$49,$49,$00,$00),
($02,$00,$82,$05,$6A,$4A,$4A,$4A,$00,$00),
($02,$00,$96,$05,$6B,$4B,$4B,$4B,$00,$00),
($02,$00,$AA,$05,$6C,$4C,$4C,$4C,$00,$00),
($02,$00,$BE,$05,$6D,$4D,$4D,$4D,$00,$00),
($02,$00,$D2,$05,$6E,$4E,$4E,$4E,$00,$00),
($02,$00,$E6,$05,$6F,$4F,$4F,$4F,$00,$00),
($02,$00,$FA,$05,$70,$50,$50,$50,$00,$00),
($02,$00,$0E,$06,$71,$51,$51,$51,$00,$00),
($02,$00,$22,$06,$72,$52,$52,$52,$00,$00),
($02,$00,$36,$06,$73,$53,$53,$53,$00,$00),
($02,$00,$4A,$06,$74,$54,$54,$54,$00,$00),
($02,$00,$5E,$06,$75,$55,$55,$55,$00,$00),
($02,$00,$72,$06,$76,$56,$56,$56,$00,$00),
($02,$00,$86,$06,$77,$57,$57,$57,$00,$00),
($02,$00,$9A,$06,$78,$58,$58,$58,$00,$00),
($02,$00,$AE,$06,$79,$59,$59,$59,$00,$00),
($02,$00,$C2,$06,$7A,$5A,$5A,$5A,$00,$00),
($00,$00,$91,$00,$5B,$5B,$5B,$5B,$00,$00),
($00,$00,$96,$00,$5C,$5C,$5C,$5C,$00,$00),
($00,$00,$9B,$00,$5D,$5D,$5D,$5D,$00,$00),
($00,$00,$A0,$00,$5E,$5E,$5E,$5E,$00,$00),
($01,$00,$A5,$00,$5F,$5F,$5F,$5F,$00,$00),
($00,$00,$AA,$00,$60,$60,$60,$60,$00,$00),
($01,$00,$CE,$04,$61,$61,$61,$61,$00,$00),
($01,$00,$E2,$04,$62,$62,$62,$62,$00,$00),
($01,$00,$F6,$04,$63,$63,$63,$63,$00,$00),
($01,$00,$0A,$05,$64,$64,$64,$64,$00,$00),
($01,$00,$1E,$05,$65,$65,$65,$65,$00,$00),
($01,$00,$32,$05,$66,$66,$66,$66,$00,$00),
($01,$00,$46,$05,$67,$67,$67,$67,$00,$00),
($01,$00,$5A,$05,$68,$68,$68,$68,$00,$00),
($01,$00,$6E,$05,$69,$69,$69,$69,$00,$00),
($01,$00,$82,$05,$6A,$6A,$6A,$6A,$00,$00),
($01,$00,$96,$05,$6B,$6B,$6B,$6B,$00,$00),
($01,$00,$AA,$05,$6C,$6C,$6C,$6C,$00,$00),
($01,$00,$BE,$05,$6D,$6D,$6D,$6D,$00,$00),
($01,$00,$D2,$05,$6E,$6E,$6E,$6E,$00,$00),
($01,$00,$E6,$05,$6F,$6F,$6F,$6F,$00,$00),
($01,$00,$FA,$05,$70,$70,$70,$70,$00,$00),
($01,$00,$0E,$06,$71,$71,$71,$71,$00,$00),
($01,$00,$22,$06,$72,$72,$72,$72,$00,$00),
($01,$00,$36,$06,$73,$73,$73,$73,$00,$00),
($01,$00,$4A,$06,$74,$74,$74,$74,$00,$00),
($01,$00,$5E,$06,$75,$75,$75,$75,$00,$00),
($01,$00,$72,$06,$76,$76,$76,$76,$00,$00),
($01,$00,$86,$06,$77,$77,$77,$77,$00,$00),
($01,$00,$9A,$06,$78,$78,$78,$78,$00,$00),
($01,$00,$AE,$06,$79,$79,$79,$79,$00,$00),
($01,$00,$C2,$06,$7A,$7A,$7A,$7A,$00,$00),
($00,$00,$AF,$00,$7B,$7B,$7B,$7B,$00,$00),
($00,$00,$B4,$00,$7C,$7C,$7C,$7C,$00,$00),
($00,$00,$B9,$00,$7D,$7D,$7D,$7D,$00,$00),
($00,$00,$BE,$00,$7E,$7E,$7E,$7E,$00,$00),
($00,$00,$BF,$00,$7F,$7F,$7F,$7F,$00,$00),
($00,$00,$C0,$00,$80,$80,$20,$20,$00,$00),
($00,$00,$C1,$00,$81,$81,$20,$20,$00,$00),
($00,$00,$C3,$00,$82,$82,$E2,$E2,$00,$00),
($00,$00,$C8,$00,$83,$83,$C4,$C4,$00,$00),
($00,$00,$CD,$00,$84,$84,$E3,$E3,$00,$00),
($00,$00,$D2,$00,$85,$85,$C9,$C9,$00,$00),
($00,$00,$D7,$00,$86,$86,$A0,$A0,$00,$00),
($00,$00,$DC,$00,$87,$87,$E0,$E0,$00,$00),
($00,$00,$E1,$00,$88,$88,$5E,$5E,$00,$00),
($00,$00,$E6,$00,$89,$89,$E4,$E4,$00,$00),
($02,$00,$36,$06,$73,$8A,$20,$20,$00,$00),
($00,$00,$F0,$00,$8B,$8B,$DC,$DC,$00,$00),
($0C,$00,$E6,$05,$6F,$8C,$CE,$CE,$00,$00),
($00,$00,$F6,$00,$8D,$8D,$20,$20,$00,$00),
($00,$00,$F7,$00,$8E,$8E,$20,$20,$00,$00),
($00,$00,$F8,$00,$8F,$8F,$20,$20,$00,$00),
($00,$00,$F9,$00,$90,$90,$20,$20,$00,$00),
($00,$04,$FA,$00,$91,$91,$D4,$D4,$00,$00),
($00,$05,$FF,$00,$92,$92,$D5,$D5,$00,$00),
($00,$06,$04,$01,$93,$93,$D2,$D2,$00,$00),
($00,$07,$09,$01,$94,$94,$D3,$D3,$00,$00),
($00,$01,$0E,$01,$95,$95,$A5,$A5,$00,$00),
($00,$02,$13,$01,$96,$96,$D0,$D0,$00,$00),
($00,$03,$18,$01,$97,$97,$D1,$D1,$00,$00),
($00,$00,$1D,$01,$98,$98,$7E,$7E,$00,$00),
($00,$00,$22,$01,$99,$99,$AA,$AA,$00,$00),
($02,$00,$36,$06,$73,$9A,$20,$20,$00,$00),
($00,$00,$31,$01,$9B,$9B,$DD,$DD,$00,$00),
($0C,$00,$E6,$05,$6F,$9C,$CF,$CF,$00,$00),
($00,$00,$37,$01,$9D,$9D,$20,$20,$00,$00),
($00,$00,$38,$01,$9E,$9E,$20,$20,$00,$00),
($02,$00,$AE,$06,$79,$9F,$D9,$D9,$00,$00),
($00,$00,$3C,$01,$A0,$A0,$A0,$A0,$00,$00),
($00,$00,$40,$01,$A1,$A1,$C1,$C1,$00,$00),
($00,$00,$45,$01,$A2,$A2,$A2,$A2,$00,$00),
($00,$00,$4A,$01,$A3,$A3,$A3,$A3,$00,$00),
($00,$00,$4F,$01,$A4,$A4,$DB,$DB,$00,$00),
($00,$00,$54,$01,$A5,$A5,$B4,$B4,$00,$00),
($00,$00,$59,$01,$A6,$A6,$20,$20,$00,$00),
($00,$00,$5E,$01,$A7,$A7,$A4,$A4,$00,$00),
($00,$00,$63,$01,$A8,$A8,$AC,$AC,$00,$00),
($00,$00,$68,$01,$A9,$A9,$A9,$A9,$00,$00),
($00,$00,$6D,$01,$AA,$AA,$BB,$BB,$00,$00),
($00,$00,$72,$01,$AB,$AB,$C7,$C7,$00,$00),
($00,$00,$77,$01,$AC,$AC,$C2,$C2,$00,$00),
($00,$00,$7C,$01,$AD,$AD,$2D,$2D,$00,$00),
($00,$00,$81,$01,$AE,$AE,$A8,$A8,$00,$00),
($00,$00,$86,$01,$AF,$AF,$F8,$F8,$00,$00),
($00,$00,$8B,$01,$B0,$B0,$A1,$A1,$00,$00),
($00,$00,$90,$01,$B1,$B1,$B1,$B1,$00,$00),
($00,$00,$95,$01,$B2,$B2,$20,$20,$00,$00),
($00,$00,$9A,$01,$B3,$B3,$20,$20,$00,$00),
($00,$00,$9F,$01,$B4,$B4,$AB,$AB,$00,$00),
($00,$00,$A4,$01,$B5,$B5,$B5,$B5,$00,$00),
($00,$00,$A9,$01,$B6,$B6,$A6,$A6,$00,$00),
($00,$00,$AE,$01,$B7,$B7,$E1,$E1,$00,$00),
($00,$00,$B3,$01,$B8,$B8,$FC,$FC,$00,$00),
($00,$00,$B8,$01,$B9,$B9,$20,$20,$00,$00),
($00,$00,$BD,$01,$BA,$BA,$BC,$BC,$00,$00),
($00,$00,$C2,$01,$BB,$BB,$C8,$C8,$00,$00),
($00,$00,$C7,$01,$BC,$BC,$20,$20,$00,$00),
($00,$00,$CC,$01,$BD,$BD,$20,$20,$00,$00),
($00,$00,$D1,$01,$BE,$BE,$20,$20,$00,$00),
($00,$00,$D6,$01,$BF,$BF,$C0,$C0,$00,$00),
($02,$00,$CE,$04,$61,$C0,$CB,$CB,$00,$00),
($02,$00,$CE,$04,$61,$C1,$E7,$E7,$00,$00),
($02,$00,$CE,$04,$61,$C2,$E5,$E5,$00,$00),
($02,$00,$CE,$04,$61,$C3,$CC,$CC,$00,$00),
($02,$00,$CE,$04,$61,$C4,$80,$80,$00,$00),
($02,$00,$CE,$04,$61,$C5,$81,$81,$00,$00),
($0C,$00,$CE,$04,$61,$C6,$AE,$AE,$00,$00),
($02,$00,$F6,$04,$63,$C7,$82,$82,$00,$00),
($02,$00,$1E,$05,$65,$C8,$E9,$E9,$00,$00),
($02,$00,$1E,$05,$65,$C9,$83,$83,$00,$00),
($02,$00,$1E,$05,$65,$CA,$E6,$E6,$00,$00),
($02,$00,$1E,$05,$65,$CB,$E8,$E8,$00,$00),
($02,$00,$6E,$05,$69,$CC,$ED,$ED,$00,$00),
($02,$00,$6E,$05,$69,$CD,$EA,$EA,$00,$00),
($02,$00,$6E,$05,$69,$CE,$EB,$EB,$00,$00),
($02,$00,$6E,$05,$69,$CF,$EC,$EC,$00,$00),
($02,$00,$0A,$05,$64,$D0,$20,$20,$00,$00),
($02,$00,$D2,$05,$6E,$D1,$84,$84,$00,$00),
($02,$00,$E6,$05,$6F,$D2,$F1,$F1,$00,$00),
($02,$00,$E6,$05,$6F,$D3,$EE,$EE,$00,$00),
($02,$00,$E6,$05,$6F,$D4,$EF,$EF,$00,$00),
($02,$00,$E6,$05,$6F,$D5,$CD,$CD,$00,$00),
($02,$00,$E6,$05,$6F,$D6,$85,$85,$00,$00),
($00,$00,$DB,$01,$D7,$D7,$20,$20,$00,$00),
($02,$00,$E6,$05,$6F,$D8,$AF,$AF,$00,$00),
($02,$00,$5E,$06,$75,$D9,$F4,$F4,$00,$00),
($02,$00,$5E,$06,$75,$DA,$F2,$F2,$00,$00),
($02,$00,$5E,$06,$75,$DB,$F3,$F3,$00,$00),
($02,$00,$5E,$06,$75,$DC,$86,$86,$00,$00),
($02,$00,$AE,$06,$79,$DD,$20,$20,$00,$00),
($02,$00,$42,$04,$DE,$DE,$20,$20,$00,$00),
($0C,$00,$36,$06,$73,$DF,$A7,$A7,$00,$00),
($02,$00,$CE,$04,$61,$E0,$88,$88,$00,$00),
($02,$00,$CE,$04,$61,$E1,$87,$87,$00,$00),
($02,$00,$CE,$04,$61,$E2,$89,$89,$00,$00),
($02,$00,$CE,$04,$61,$E3,$8B,$8B,$00,$00),
($02,$00,$CE,$04,$61,$E4,$8A,$8A,$00,$00),
($02,$00,$CE,$04,$61,$E5,$8C,$8C,$00,$00),
($0C,$00,$CE,$04,$61,$E6,$BE,$BE,$00,$00),
($02,$00,$F6,$04,$63,$E7,$8D,$8D,$00,$00),
($02,$00,$1E,$05,$65,$E8,$8F,$8F,$00,$00),
($02,$00,$1E,$05,$65,$E9,$8E,$8E,$00,$00),
($02,$00,$1E,$05,$65,$EA,$90,$90,$00,$00),
($02,$00,$1E,$05,$65,$EB,$91,$91,$00,$00),
($02,$00,$6E,$05,$69,$EC,$93,$93,$00,$00),
($02,$00,$6E,$05,$69,$ED,$92,$92,$00,$00),
($02,$00,$6E,$05,$69,$EE,$94,$94,$00,$00),
($02,$00,$6E,$05,$69,$EF,$95,$95,$00,$00),
($02,$00,$0A,$05,$6F,$F0,$20,$20,$00,$00),
($02,$00,$D2,$05,$6E,$F1,$96,$96,$00,$00),
($02,$00,$E6,$05,$6F,$F2,$98,$98,$00,$00),
($02,$00,$E6,$05,$6F,$F3,$97,$97,$00,$00),
($02,$00,$E6,$05,$6F,$F4,$99,$99,$00,$00),
($02,$00,$E6,$05,$6F,$F5,$9B,$9B,$00,$00),
($02,$00,$E6,$05,$6F,$F6,$9A,$9A,$00,$00),
($00,$00,$66,$00,$F7,$F7,$D6,$D6,$00,$00),
($02,$00,$E6,$05,$6F,$F8,$BF,$BF,$00,$00),
($02,$00,$5E,$06,$75,$F9,$9D,$9D,$00,$00),
($02,$00,$5E,$06,$75,$FA,$9C,$9C,$00,$00),
($02,$00,$5E,$06,$75,$FB,$9E,$9E,$00,$00),
($02,$00,$5E,$06,$75,$FC,$9F,$9F,$00,$00),
($02,$00,$AE,$06,$79,$FD,$20,$20,$00,$00),
($02,$00,$4C,$04,$FE,$FE,$20,$20,$00,$00),
($02,$00,$AE,$06,$79,$FF,$D8,$D8,$00,$00)
);
