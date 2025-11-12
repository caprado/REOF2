void func_001b5730() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2b << 16;                                            // 0x001b5730: lui $at, 0x2b
    a3 = *(int32_t*)((a0) + 0x84);                              // 0x001b5734: lw $a3, 0x84($a0)
    t1 = g_002ac560;  // Global at 0x002ac560                   // 0x001b5738: lw $t1, -0x3aa0($at)
    v0 = 0x2b << 16;                                            // 0x001b573c: lui $v0, 0x2b
    sp = sp + -0x320;                                           // 0x001b5740: addiu $sp, $sp, -0x320
    v0 = v0 + -0x3ac0;                                          // 0x001b5744: addiu $v0, $v0, -0x3ac0
    a0 = -4;                                                    // 0x001b574c: addiu $a0, $zero, -4
    at = 0x2b << 16;                                            // 0x001b5750: lui $at, 0x2b
    t0 = g_002ac568;  // Global at 0x002ac568                   // 0x001b5754: lw $t0, -0x3a98($at)
    at = 0x2b << 16;                                            // 0x001b575c: lui $at, 0x2b
    t2 = g_002ac54c;  // Global at 0x002ac54c                   // 0x001b5760: lw $t2, -0x3ab4($at)
    a1 = t2 + 3;                                                // 0x001b5764: addiu $a1, $t2, 3
    a1 = a1 & a0;                                               // 0x001b5768: and $a1, $a1, $a0
    a0 = t0 + t1;                                               // 0x001b5770: addu $a0, $t0, $t1
    if (a3 != 0) goto label_0x1b57d4;                           // 0x001b5774: bnez $a3, 0x1b57d4
    t2 = (unsigned)a1 >> 2;                                     // 0x001b5778: srl $t2, $a1, 2
    goto label_0x1b57c0;                                        // 0x001b577c: b 0x1b57c0
label_0x1b5784:
    t1 = *(uint8_t*)(a0);                                       // 0x001b5784: lbu $t1, 0($a0)
    t3 = t3 + 1;                                                // 0x001b5788: addiu $t3, $t3, 1
    a1 = t1 & 0xc0;                                             // 0x001b578c: andi $a1, $t1, 0xc0
    a0 = a0 + 1;                                                // 0x001b5790: addiu $a0, $a0, 1
    a3 = a1 >> 6;                                               // 0x001b5794: sra $a3, $a1, 6
    a1 = t1 & 0x30;                                             // 0x001b5798: andi $a1, $t1, 0x30
    t0 = a3 | a1;                                               // 0x001b579c: or $t0, $a3, $a1
    a1 = t1 & 0xc;                                              // 0x001b57a0: andi $a1, $t1, 0xc
    a3 = a1 << 6;                                               // 0x001b57a4: sll $a3, $a1, 6
    a1 = t1 & 3;                                                // 0x001b57a8: andi $a1, $t1, 3
    a3 = a3 | t0;                                               // 0x001b57ac: or $a3, $a3, $t0
    a1 = a1 << 0xc;                                             // 0x001b57b0: sll $a1, $a1, 0xc
    a1 = a1 | a3;                                               // 0x001b57b4: or $a1, $a1, $a3
    *(uint16_t*)(a2) = a1;                                      // 0x001b57b8: sh $a1, 0($a2)
    a2 = a2 + 2;                                                // 0x001b57bc: addiu $a2, $a2, 2
label_0x1b57c0:
    a1 = (t3 < t2) ? 1 : 0;                                     // 0x001b57c0: slt $a1, $t3, $t2
    if (a1 != 0) goto label_0x1b5784;                           // 0x001b57c4: bnez $a1, 0x1b5784
    /* nop */                                                   // 0x001b57c8: nop 
    goto label_0x1b5910;                                        // 0x001b57cc: b 0x1b5910
    v0 = g_002ac558;  // Global at 0x002ac558                   // 0x001b57d0: lw $v0, 0x18($v0)
label_0x1b57d4:
    a1 = t2 << 2;                                               // 0x001b57d8: sll $a1, $t2, 2
label_0x1b57dc:
    a1 = a1 + t2;                                               // 0x001b57e0: addu $a1, $a1, $t2
    a1 = a1 << 2;                                               // 0x001b57e4: sll $a1, $a1, 2
    a1 = a1 + sp;                                               // 0x001b57e8: addu $a1, $a1, $sp
    t4 = a1 + 0x190;                                            // 0x001b57ec: addiu $t4, $a1, 0x190
label_0x1b57f0:
    t1 = *(uint8_t*)(a0);                                       // 0x001b57f0: lbu $t1, 0($a0)
    t3 = t4 + t5;                                               // 0x001b57f4: addu $t3, $t4, $t5
    t5 = t5 + 4;                                                // 0x001b57f8: addiu $t5, $t5, 4
    a1 = (t5 < 0x14) ? 1 : 0;                                   // 0x001b57fc: slti $a1, $t5, 0x14
    a3 = t1 & 0xc0;                                             // 0x001b5800: andi $a3, $t1, 0xc0
    a0 = a0 + 1;                                                // 0x001b5804: addiu $a0, $a0, 1
    t0 = a3 >> 6;                                               // 0x001b5808: sra $t0, $a3, 6
    a3 = t1 & 0x30;                                             // 0x001b580c: andi $a3, $t1, 0x30
    *(uint8_t*)(t3) = t0;                                       // 0x001b5810: sb $t0, 0($t3)
    a3 = a3 >> 4;                                               // 0x001b5814: sra $a3, $a3, 4
    *(uint8_t*)((t3) + 1) = a3;                                 // 0x001b5818: sb $a3, 1($t3)
    a3 = t1 & 0xc;                                              // 0x001b581c: andi $a3, $t1, 0xc
    t0 = a3 >> 2;                                               // 0x001b5820: sra $t0, $a3, 2
    a3 = t1 & 3;                                                // 0x001b5824: andi $a3, $t1, 3
    *(uint8_t*)((t3) + 2) = t0;                                 // 0x001b5828: sb $t0, 2($t3)
    if (a1 != 0) goto label_0x1b57f0;                           // 0x001b582c: bnez $a1, 0x1b57f0
    *(uint8_t*)((t3) + 3) = a3;                                 // 0x001b5830: sb $a3, 3($t3)
    t2 = t2 + 1;                                                // 0x001b5834: addiu $t2, $t2, 1
    a1 = (t2 < 0x14) ? 1 : 0;                                   // 0x001b5838: slti $a1, $t2, 0x14
    if (a1 != 0) goto label_0x1b57dc;                           // 0x001b583c: bnez $a1, 0x1b57dc
    a1 = t2 << 2;                                               // 0x001b5840: sll $a1, $t2, 2
    a0 = t0 << 2;                                               // 0x001b5848: sll $a0, $t0, 2
label_0x1b584c:
    a3 = 0x13;                                                  // 0x001b584c: addiu $a3, $zero, 0x13
    a1 = a0 + t0;                                               // 0x001b5850: addu $a1, $a0, $t0
    a0 = a3 - t0;                                               // 0x001b5854: subu $a0, $a3, $t0
    a1 = a1 << 2;                                               // 0x001b5858: sll $a1, $a1, 2
    a0 = a0 + sp;                                               // 0x001b585c: addu $a0, $a0, $sp
    a1 = a1 + sp;                                               // 0x001b5860: addu $a1, $a1, $sp
    t1 = a0;                                                    // 0x001b5864: addiu $t1, $a0, 0
    t2 = a1 + 0x190;                                            // 0x001b5868: addiu $t2, $a1, 0x190
label_0x1b586c:
    a1 = t2 + a3;                                               // 0x001b586c: addu $a1, $t2, $a3
    a0 = a3 << 2;                                               // 0x001b5870: sll $a0, $a3, 2
    a1 = *(uint8_t*)(a1);                                       // 0x001b5874: lbu $a1, 0($a1)
    a0 = a0 + a3;                                               // 0x001b5878: addu $a0, $a0, $a3
    a0 = a0 << 2;                                               // 0x001b587c: sll $a0, $a0, 2
    a3 = a3 + -1;                                               // 0x001b5880: addiu $a3, $a3, -1
    a0 = t1 + a0;                                               // 0x001b5884: addu $a0, $t1, $a0
    if (a3 >= 0) goto label_0x1b586c;                           // 0x001b5888: bgez $a3, 0x1b586c
    *(uint8_t*)(a0) = a1;                                       // 0x001b588c: sb $a1, 0($a0)
    t0 = t0 + 1;                                                // 0x001b5890: addiu $t0, $t0, 1
    a0 = (t0 < 0x14) ? 1 : 0;                                   // 0x001b5894: slti $a0, $t0, 0x14
    if (a0 != 0) goto label_0x1b584c;                           // 0x001b5898: bnez $a0, 0x1b584c
    a0 = t0 << 2;                                               // 0x001b589c: sll $a0, $t0, 2
    a0 = t3 << 2;                                               // 0x001b58a4: sll $a0, $t3, 2
label_0x1b58a8:
    a0 = a0 + t3;                                               // 0x001b58ac: addu $a0, $a0, $t3
    a0 = a0 << 2;                                               // 0x001b58b0: sll $a0, $a0, 2
    a0 = a0 + sp;                                               // 0x001b58b4: addu $a0, $a0, $sp
    t4 = a0;                                                    // 0x001b58b8: addiu $t4, $a0, 0
label_0x1b58bc:
    a1 = t4 + t2;                                               // 0x001b58bc: addu $a1, $t4, $t2
    t1 = *(uint8_t*)((a1) + 1);                                 // 0x001b58c0: lbu $t1, 1($a1)
    t2 = t2 + 4;                                                // 0x001b58c4: addiu $t2, $t2, 4
    a3 = *(uint8_t*)((a1) + 2);                                 // 0x001b58c8: lbu $a3, 2($a1)
    a0 = (t2 < 0x14) ? 1 : 0;                                   // 0x001b58cc: slti $a0, $t2, 0x14
    t0 = *(uint8_t*)(a1);                                       // 0x001b58d0: lbu $t0, 0($a1)
    t1 = t1 << 4;                                               // 0x001b58d4: sll $t1, $t1, 4
    a3 = a3 << 8;                                               // 0x001b58d8: sll $a3, $a3, 8
    a1 = *(uint8_t*)((a1) + 3);                                 // 0x001b58dc: lbu $a1, 3($a1)
    t0 = t0 | t1;                                               // 0x001b58e0: or $t0, $t0, $t1
    a3 = a3 | t0;                                               // 0x001b58e4: or $a3, $a3, $t0
    a1 = a1 << 0xc;                                             // 0x001b58e8: sll $a1, $a1, 0xc
    a1 = a1 | a3;                                               // 0x001b58ec: or $a1, $a1, $a3
    *(uint16_t*)(a2) = a1;                                      // 0x001b58f0: sh $a1, 0($a2)
    if (a0 != 0) goto label_0x1b58bc;                           // 0x001b58f4: bnez $a0, 0x1b58bc
    a2 = a2 + 2;                                                // 0x001b58f8: addiu $a2, $a2, 2
    t3 = t3 + 1;                                                // 0x001b58fc: addiu $t3, $t3, 1
    a0 = (t3 < 0x14) ? 1 : 0;                                   // 0x001b5900: slti $a0, $t3, 0x14
    if (a0 != 0) goto label_0x1b58a8;                           // 0x001b5904: bnez $a0, 0x1b58a8
    a0 = t3 << 2;                                               // 0x001b5908: sll $a0, $t3, 2
    v0 = g_002ac558;  // Global at 0x002ac558                   // 0x001b590c: lw $v0, 0x18($v0)
label_0x1b5910:
    v0 = v1 + v0;                                               // 0x001b5910: addu $v0, $v1, $v0
    return;                                                     // 0x001b5914: jr $ra
    sp = sp + 0x320;                                            // 0x001b5918: addiu $sp, $sp, 0x320
}