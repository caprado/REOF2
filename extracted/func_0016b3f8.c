void func_0016b3f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x0016b3f8: addiu $sp, $sp, -0x50
    func_0016b8a8();  // 0x16b858                                // 0x0016b418: jal 0x16b858
    /* beqzl $s0, 0x16b498 */                                   // 0x0016b424: beqzl $s0, 0x16b498
    v0 = *(int32_t*)(s0);                                       // 0x0016b42c: lw $v0, 0($s0)
    /* bnezl $v0, 0x16b498 */                                   // 0x0016b430: bnezl $v0, 0x16b498
    func_00157c48();  // 0x157bb0                                // 0x0016b43c: jal 0x157bb0
    v0 = 0xb0;                                                  // 0x0016b44c: addiu $v0, $zero, 0xb0
    v1 = (a3 < 0xb1) ? 1 : 0;                                   // 0x0016b450: slti $v1, $a3, 0xb1
    a0 = local_c;                                               // 0x0016b454: lw $a0, 0xc($sp)
    if (v1 == 0) a3 = v0;                                       // 0x0016b458: movz $a3, $v0, $v1
    v1 = s0 + 0x24;                                             // 0x0016b45c: addiu $v1, $s0, 0x24
    if (a0 <= 0) goto label_0x16b478;                           // 0x0016b464: blez $a0, 0x16b478
    goto label_0x16b48c;                                        // 0x0016b46c: b 0x16b48c
    *(uint32_t*)((v1) + 0x160) = a3;                            // 0x0016b470: sw $a3, 0x160($v1)
    /* nop */                                                   // 0x0016b474: nop 
label_0x16b478:
    v0 = local_8;                                               // 0x0016b478: lw $v0, 8($sp)
    if (v0 <= 0) goto label_0x16b498;                           // 0x0016b47c: blezl $v0, 0x16b498
    *(uint32_t*)((v1) + 0x164) = a3;                            // 0x0016b484: sw $a3, 0x164($v1)
    v0 = s0 + 0xd4;                                             // 0x0016b488: addiu $v0, $s0, 0xd4
label_0x16b48c:
    func_00155db0();  // 0x155b20                                // 0x0016b48c: jal 0x155b20
label_0x16b498:
    return;                                                     // 0x0016b4a8: jr $ra
    sp = sp + 0x50;                                             // 0x0016b4ac: addiu $sp, $sp, 0x50
}