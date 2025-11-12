void func_001cb890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001cb890: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cb89c: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((a0) + 0x1ac);                             // 0x001cb8ac: lw $s0, 0x1ac($a0)
    a1 = s1 + 0xc;                                              // 0x001cb8b0: addiu $a1, $s1, 0xc
    if (s1 != 0) goto label_0x1cb8c4;                           // 0x001cb8b4: bnez $s1, 0x1cb8c4
    a0 = s0 + 0xc;                                              // 0x001cb8b8: addiu $a0, $s0, 0xc
    goto label_0x1cba08;                                        // 0x001cb8bc: b 0x1cba08
label_0x1cb8c4:
    v0 = *(uint16_t*)(s1);                                      // 0x001cb8c4: lhu $v0, 0($s1)
    if (v0 == 0) goto label_0x1cb8ec;                           // 0x001cb8c8: beqz $v0, 0x1cb8ec
    t0 = *(uint8_t*)((s1) + 3);                                 // 0x001cb8d0: lbu $t0, 3($s1)
    if (t0 == 0) goto label_0x1cb8e8;                           // 0x001cb8d4: beqz $t0, 0x1cb8e8
    /* nop */                                                   // 0x001cb8d8: nop 
    v0 = *(uint16_t*)((s1) + 8);                                // 0x001cb8dc: lhu $v0, 8($s1)
    if (v0 != 0) goto label_0x1cb8f4;                           // 0x001cb8e0: bnez $v0, 0x1cb8f4
    /* nop */                                                   // 0x001cb8e4: nop 
label_0x1cb8e8:
label_0x1cb8ec:
    goto label_0x1cba0c;                                        // 0x001cb8ec: b 0x1cba0c
label_0x1cb8f4:
    a3 = *(uint16_t*)((s2) + 0x1b4);                            // 0x001cb8f4: lhu $a3, 0x1b4($s2)
    v1 = *(uint16_t*)((s2) + 0x1b0);                            // 0x001cb8f8: lhu $v1, 0x1b0($s2)
    v0 = *(int32_t*)((s2) + 0x1a8);                             // 0x001cb8fc: lw $v0, 0x1a8($s2)
    a2 = s0 + a3;                                               // 0x001cb900: addu $a2, $s0, $a3
    v0 = v0 + v1;                                               // 0x001cb904: addu $v0, $v0, $v1
    at = ((unsigned)v0 < (unsigned)a2) ? 1 : 0;                 // 0x001cb908: sltu $at, $v0, $a2
    if (at == 0) goto label_0x1cb91c;                           // 0x001cb90c: beqz $at, 0x1cb91c
    a2 = t0 & 0xff;                                             // 0x001cb910: andi $a2, $t0, 0xff
    goto label_0x1cba08;                                        // 0x001cb914: b 0x1cba08
label_0x1cb91c:
    v0 = a3 + -0xc;                                             // 0x001cb91c: addiu $v0, $a3, -0xc
    at = (v0 < a2) ? 1 : 0;                                     // 0x001cb920: slt $at, $v0, $a2
    if (at != 0) goto label_0x1cb93c;                           // 0x001cb924: bnez $at, 0x1cb93c
    func_00107b68();  // 0x107ab8                                // 0x001cb92c: jal 0x107ab8
    /* nop */                                                   // 0x001cb930: nop 
    goto label_0x1cb944;                                        // 0x001cb934: b 0x1cb944
    v0 = *(uint16_t*)(s1);                                      // 0x001cb938: lhu $v0, 0($s1)
label_0x1cb93c:
    goto label_0x1cba08;                                        // 0x001cb93c: b 0x1cba08
    /* nop */                                                   // 0x001cb940: nop 
label_0x1cb944:
    *(uint16_t*)(s0) = v0;                                      // 0x001cb948: sh $v0, 0($s0)
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x001cb94c: lbu $v0, 2($s1)
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x001cb950: sb $v0, 2($s0)
    v0 = *(uint8_t*)((s1) + 3);                                 // 0x001cb954: lbu $v0, 3($s1)
    v0 = v0 + 0xc;                                              // 0x001cb958: addiu $v0, $v0, 0xc
    *(uint8_t*)((s0) + 3) = v0;                                 // 0x001cb95c: sb $v0, 3($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001cb960: lw $v0, 4($s1)
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001cb964: sw $v0, 4($s0)
    v0 = *(uint16_t*)((s1) + 8);                                // 0x001cb968: lhu $v0, 8($s1)
    *(uint16_t*)((s0) + 8) = v0;                                // 0x001cb96c: sh $v0, 8($s0)
    v0 = *(uint8_t*)((s1) + 0xa);                               // 0x001cb970: lbu $v0, 0xa($s1)
    *(uint8_t*)((s0) + 0xa) = v0;                               // 0x001cb974: sb $v0, 0xa($s0)
    v0 = *(uint8_t*)((s1) + 0xb);                               // 0x001cb978: lbu $v0, 0xb($s1)
    v0 = v0 & 0xe0;                                             // 0x001cb97c: andi $v0, $v0, 0xe0
    func_001cbff0();  // 0x1cbfd0                                // 0x001cb980: jal 0x1cbfd0
    s1 = v0 & 0xff;                                             // 0x001cb984: andi $s1, $v0, 0xff
    v1 = v0 & 0xff;                                             // 0x001cb988: andi $v1, $v0, 0xff
    v0 = 0xff;                                                  // 0x001cb98c: addiu $v0, $zero, 0xff
    if (v1 == v0) goto label_0x1cb9a0;                          // 0x001cb990: beq $v1, $v0, 0x1cb9a0
    /* nop */                                                   // 0x001cb994: nop 
    goto label_0x1cb9a4;                                        // 0x001cb998: b 0x1cb9a4
    v0 = v1 & 0x1f;                                             // 0x001cb99c: andi $v0, $v1, 0x1f
label_0x1cb9a0:
label_0x1cb9a4:
    v1 = v0 & 0xff;                                             // 0x001cb9a4: andi $v1, $v0, 0xff
    v0 = s1 & 0xff;                                             // 0x001cb9a8: andi $v0, $s1, 0xff
    v0 = v0 | v1;                                               // 0x001cb9ac: or $v0, $v0, $v1
    *(uint8_t*)((s0) + 0xb) = v0;                               // 0x001cb9b0: sb $v0, 0xb($s0)
    v1 = *(uint16_t*)((s2) + 0x1b4);                            // 0x001cb9b4: lhu $v1, 0x1b4($s2)
    v0 = *(int32_t*)((s2) + 0x1ac);                             // 0x001cb9b8: lw $v0, 0x1ac($s2)
    v0 = v0 + v1;                                               // 0x001cb9bc: addu $v0, $v0, $v1
    *(uint32_t*)((s2) + 0x1ac) = v0;                            // 0x001cb9c0: sw $v0, 0x1ac($s2)
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x001cb9c4: lbu $a0, 3($s0)
    if (a0 >= 0) goto label_0x1cb9dc;                           // 0x001cb9c8: bgez $a0, 0x1cb9dc
    v1 = a0 & 3;                                                // 0x001cb9cc: andi $v1, $a0, 3
    if (v1 == 0) goto label_0x1cb9dc;                           // 0x001cb9d0: beqz $v1, 0x1cb9dc
    /* nop */                                                   // 0x001cb9d4: nop 
    v1 = v1 + -4;                                               // 0x001cb9d8: addiu $v1, $v1, -4
label_0x1cb9dc:
    if (v1 == 0) goto label_0x1cb9ec;                           // 0x001cb9dc: beqz $v1, 0x1cb9ec
    v0 = 4;                                                     // 0x001cb9e0: addiu $v0, $zero, 4
    v0 = v0 - v1;                                               // 0x001cb9e4: subu $v0, $v0, $v1
    a0 = a0 + v0;                                               // 0x001cb9e8: addu $a0, $a0, $v0
label_0x1cb9ec:
    v1 = *(int32_t*)((s2) + 0x1c8);                             // 0x001cb9ec: lw $v1, 0x1c8($s2)
    v0 = 1;                                                     // 0x001cb9f0: addiu $v0, $zero, 1
    v1 = v1 + a0;                                               // 0x001cb9f4: addu $v1, $v1, $a0
    *(uint32_t*)((s2) + 0x1c8) = v1;                            // 0x001cb9f8: sw $v1, 0x1c8($s2)
    v1 = *(uint8_t*)((s2) + 0x1c4);                             // 0x001cb9fc: lbu $v1, 0x1c4($s2)
    v1 = v1 + 1;                                                // 0x001cba00: addiu $v1, $v1, 1
    *(uint8_t*)((s2) + 0x1c4) = v1;                             // 0x001cba04: sb $v1, 0x1c4($s2)
label_0x1cba08:
label_0x1cba0c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cba0c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cba10: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cba14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cba18: jr $ra
    sp = sp + 0x40;                                             // 0x001cba1c: addiu $sp, $sp, 0x40
}