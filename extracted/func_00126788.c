void func_00126788() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_60;
    
    sp = sp + -0x60;                                            // 0x00126788: addiu $sp, $sp, -0x60
    a3 = sp + 1;                                                // 0x001267d0: addiu $a3, $sp, 1
    *(uint16_t*)(s2) = 0;                                       // 0x001267d4: sh $zero, 0($s2)
    func_001265d8();  // 1265d8                                // 0x001267d8: jal 0x1265d8
    /* bnezl $v0, 0x1269c0 */                                   // 0x001267e0: bnezl $v0, 0x1269c0
    v1 = local_0;                                               // 0x001267e8: lbu $v1, 0($sp)
    a2 = 0x30;                                                  // 0x001267ec: addiu $a2, $zero, 0x30
    a0 = 0x3c;                                                  // 0x001267f0: addiu $a0, $zero, 0x3c
    a3 = v1 ^ 4;                                                // 0x001267f4: xori $a3, $v1, 4
    if (a3 == 0) a2 = a0;                                       // 0x001267f8: movz $a2, $a0, $a3
    v1 = (s1 < a2) ? 1 : 0;                                     // 0x001267fc: slt $v1, $s1, $a2
    /* bnezl $v1, 0x1269bc */                                   // 0x00126800: bnezl $v1, 0x1269bc
    v0 = -1;                                                    // 0x00126804: addiu $v0, $zero, -1
    v1 = *(uint16_t*)(s0);                                      // 0x00126808: lhu $v1, 0($s0)
    a1 = 0 | 0x8000;                                            // 0x0012680c: ori $a1, $zero, 0x8000
    a0 = v1 << 8;                                               // 0x00126810: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00126814: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x00126818: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x0012681c: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x1268c0;                          // 0x00126820: bne $v1, $a1, 0x1268c0
    t6 = -0x100;                                                // 0x00126824: addiu $t6, $zero, -0x100
    v1 = *(uint16_t*)((s0) + 2);                                // 0x00126828: lhu $v1, 2($s0)
    a1 = a2 + -4;                                               // 0x0012682c: addiu $a1, $a2, -4
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x00126830: lbu $a0, 3($s0)
    v1 = v1 << 8;                                               // 0x00126834: sll $v1, $v1, 8
    v1 = v1 & t6;                                               // 0x00126838: and $v1, $v1, $t6
    a0 = a0 | v1;                                               // 0x0012683c: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00126840: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x00126844: sra $a0, $a0, 0x10
    a0 = (a0 < a1) ? 1 : 0;                                     // 0x00126848: slt $a0, $a0, $a1
    if (a0 == 0) goto label_0x126860;                           // 0x0012684c: beqz $a0, 0x126860
    v1 = 0x20;                                                  // 0x00126850: addiu $v1, $zero, 0x20
    goto label_0x1269bc;                                        // 0x00126854: b 0x1269bc
    v0 = -1;                                                    // 0x00126858: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0012685c: nop 
label_0x126860:
    t5 = 0x14;                                                  // 0x00126860: addiu $t5, $zero, 0x14
    if (a3 == 0) t5 = v1;                                       // 0x00126864: movz $t5, $v1, $a3
    t0 = 1;                                                     // 0x00126868: addiu $t0, $zero, 1
    a2 = s0 + t5;                                               // 0x0012686c: addu $a2, $s0, $t5
    t5 = t5 + 2;                                                // 0x00126870: addiu $t5, $t5, 2
    a3 = s0 + t5;                                               // 0x00126874: addu $a3, $s0, $t5
    t5 = t5 + 2;                                                // 0x00126878: addiu $t5, $t5, 2
    a1 = *(uint16_t*)(a2);                                      // 0x0012687c: lhu $a1, 0($a2)
    a0 = *(uint16_t*)(a3);                                      // 0x00126880: lhu $a0, 0($a3)
    v1 = *(uint8_t*)((a2) + 1);                                 // 0x00126884: lbu $v1, 1($a2)
    a1 = a1 << 8;                                               // 0x00126888: sll $a1, $a1, 8
    a2 = *(uint8_t*)((a3) + 1);                                 // 0x0012688c: lbu $a2, 1($a3)
    a0 = a0 << 8;                                               // 0x00126890: sll $a0, $a0, 8
    a0 = a0 & t6;                                               // 0x00126894: and $a0, $a0, $t6
    a1 = a1 & t6;                                               // 0x00126898: and $a1, $a1, $t6
    a2 = a2 | a0;                                               // 0x0012689c: or $a2, $a2, $a0
    v1 = v1 | a1;                                               // 0x001268a0: or $v1, $v1, $a1
    v1 = v1 << 0x10;                                            // 0x001268a4: sll $v1, $v1, 0x10
    a0 = a2 << 0x10;                                            // 0x001268a8: sll $a0, $a2, 0x10
    v1 = v1 >> 0x10;                                            // 0x001268ac: sra $v1, $v1, 0x10
    a0 = a0 >> 0x10;                                            // 0x001268b0: sra $a0, $a0, 0x10
    *(uint32_t*)(s3) = v1;                                      // 0x001268b4: sw $v1, 0($s3)
    if (a0 == t0) goto label_0x1268c8;                          // 0x001268b8: beq $a0, $t0, 0x1268c8
    *(uint16_t*)(s2) = a2;                                      // 0x001268bc: sh $a2, 0($s2)
label_0x1268c0:
    goto label_0x1269bc;                                        // 0x001268c0: b 0x1269bc
    v0 = -2;                                                    // 0x001268c4: addiu $v0, $zero, -2
label_0x1268c8:
    t5 = t5 + 2;                                                // 0x001268c8: addiu $t5, $t5, 2
    t1 = 0xff << 16;                                            // 0x001268cc: lui $t1, 0xff
    t2 = s0 + t5;                                               // 0x001268d0: addu $t2, $s0, $t5
    t5 = t5 + 2;                                                // 0x001268d4: addiu $t5, $t5, 2
    v1 = s0 + t5;                                               // 0x001268d8: addu $v1, $s0, $t5
    t5 = t5 + 4;                                                // 0x001268dc: addiu $t5, $t5, 4
    a1 = *(int32_t*)(v1);                                       // 0x001268e0: lw $a1, 0($v1)
    t3 = s0 + t5;                                               // 0x001268e4: addu $t3, $s0, $t5
    t5 = t5 + 4;                                                // 0x001268e8: addiu $t5, $t5, 4
    a3 = *(uint16_t*)(t2);                                      // 0x001268ec: lhu $a3, 0($t2)
    a2 = a1 >> 8;                                               // 0x001268f0: sra $a2, $a1, 8
    a0 = a1 << 8;                                               // 0x001268f4: sll $a0, $a1, 8
    a2 = a2 & 0xff00;                                           // 0x001268f8: andi $a2, $a2, 0xff00
    v1 = (unsigned)a1 >> 0x18;                                  // 0x001268fc: srl $v1, $a1, 0x18
    a0 = a0 & t1;                                               // 0x00126900: and $a0, $a0, $t1
    a1 = a1 << 0x18;                                            // 0x00126904: sll $a1, $a1, 0x18
    a0 = a0 | a2;                                               // 0x00126908: or $a0, $a0, $a2
    v1 = v1 | a1;                                               // 0x0012690c: or $v1, $v1, $a1
    v1 = v1 | a0;                                               // 0x00126910: or $v1, $v1, $a0
    t4 = s0 + t5;                                               // 0x00126914: addu $t4, $s0, $t5
    *(uint32_t*)(s4) = v1;                                      // 0x00126918: sw $v1, 0($s4)
    t5 = t5 + s0;                                               // 0x0012691c: addu $t5, $t5, $s0
    t0 = *(uint8_t*)((t2) + 1);                                 // 0x00126920: lbu $t0, 1($t2)
    a3 = a3 << 8;                                               // 0x00126924: sll $a3, $a3, 8
    a1 = *(int32_t*)(t3);                                       // 0x00126928: lw $a1, 0($t3)
    a3 = a3 & t6;                                               // 0x0012692c: and $a3, $a3, $t6
    t0 = t0 | a3;                                               // 0x00126930: or $t0, $t0, $a3
    a2 = a1 >> 8;                                               // 0x00126934: sra $a2, $a1, 8
    a0 = a1 << 8;                                               // 0x00126938: sll $a0, $a1, 8
    a2 = a2 & 0xff00;                                           // 0x0012693c: andi $a2, $a2, 0xff00
    v1 = (unsigned)a1 >> 0x18;                                  // 0x00126940: srl $v1, $a1, 0x18
    a0 = a0 & t1;                                               // 0x00126944: and $a0, $a0, $t1
    a1 = a1 << 0x18;                                            // 0x00126948: sll $a1, $a1, 0x18
    a0 = a0 | a2;                                               // 0x0012694c: or $a0, $a0, $a2
    v1 = v1 | a1;                                               // 0x00126950: or $v1, $v1, $a1
    v1 = v1 | a0;                                               // 0x00126954: or $v1, $v1, $a0
    *(uint16_t*)(s6) = t0;                                      // 0x00126958: sh $t0, 0($s6)
    *(uint32_t*)(s5) = v1;                                      // 0x0012695c: sw $v1, 0($s5)
    a0 = *(int32_t*)(t4);                                       // 0x00126960: lw $a0, 0($t4)
    a2 = a0 >> 8;                                               // 0x00126964: sra $a2, $a0, 8
    a1 = a0 << 8;                                               // 0x00126968: sll $a1, $a0, 8
    a2 = a2 & 0xff00;                                           // 0x0012696c: andi $a2, $a2, 0xff00
    v1 = (unsigned)a0 >> 0x18;                                  // 0x00126970: srl $v1, $a0, 0x18
    a1 = a1 & t1;                                               // 0x00126974: and $a1, $a1, $t1
    a0 = a0 << 0x18;                                            // 0x00126978: sll $a0, $a0, 0x18
    a1 = a1 | a2;                                               // 0x0012697c: or $a1, $a1, $a2
    v1 = v1 | a0;                                               // 0x00126980: or $v1, $v1, $a0
    v1 = v1 | a1;                                               // 0x00126984: or $v1, $v1, $a1
    *(uint32_t*)(s7) = v1;                                      // 0x00126988: sw $v1, 0($s7)
    a0 = *(int32_t*)((t5) + 4);                                 // 0x0012698c: lw $a0, 4($t5)
    a2 = a0 >> 8;                                               // 0x00126990: sra $a2, $a0, 8
    a1 = a0 << 8;                                               // 0x00126994: sll $a1, $a0, 8
    v1 = (unsigned)a0 >> 0x18;                                  // 0x00126998: srl $v1, $a0, 0x18
    a0 = a0 << 0x18;                                            // 0x0012699c: sll $a0, $a0, 0x18
    a1 = a1 & t1;                                               // 0x001269a0: and $a1, $a1, $t1
    a2 = a2 & 0xff00;                                           // 0x001269a4: andi $a2, $a2, 0xff00
    v1 = v1 | a0;                                               // 0x001269a8: or $v1, $v1, $a0
    a0 = local_60;                                              // 0x001269ac: lw $a0, 0x60($sp)
    a1 = a1 | a2;                                               // 0x001269b0: or $a1, $a1, $a2
    v1 = v1 | a1;                                               // 0x001269b4: or $v1, $v1, $a1
    *(uint32_t*)(a0) = v1;                                      // 0x001269b8: sw $v1, 0($a0)
label_0x1269bc:
    return;                                                     // 0x001269e0: jr $ra
    sp = sp + 0x60;                                             // 0x001269e4: addiu $sp, $sp, 0x60
}