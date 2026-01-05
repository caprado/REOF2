void func_0015cdc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015cdc8: addiu $sp, $sp, -0x20
    s1 = s0 + 0xc;                                              // 0x0015cdd8: addiu $s1, $s0, 0xc
    a0 = *(int32_t*)((s1) + 8);                                 // 0x0015cde4: lw $a0, 8($s1)
    func_00160818();  // 160818                                // 0x0015cde8: jal 0x160818
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x0015cdec: lw $a1, 0xc($s1)
    func_0015d260();  // 15d260                                // 0x0015cdf8: jal 0x15d260
    a0 = 0x22 << 16;                                            // 0x0015ce00: lui $a0, 0x22
    if (v0 == 0) goto label_0x15ce40;                           // 0x0015ce04: beqz $v0, 0x15ce40
    a0 = &str_00227388;  // "E2053004: not enough work: ainfsj_buf" // 0x0015ce08: addiu $a0, $a0, 0x7388
    *(uint32_t*)((s0) + 0xac) = v0;                             // 0x0015ce0c: sw $v0, 0xac($s0)
    func_00161580();  // 161580                                // 0x0015ce14: jal 0x161580
    *(uint32_t*)((s0) + 0xb0) = s2;                             // 0x0015ce18: sw $s2, 0xb0($s0)
    v1 = 1;                                                     // 0x0015ce1c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x15ce68;                          // 0x0015ce20: bne $v0, $v1, 0x15ce68
    func_0015d260();  // 15d260                                // 0x0015ce28: jal 0x15d260
    a1 = 2 << 16;                                               // 0x0015ce2c: lui $a1, 2
    a0 = 0x22 << 16;                                            // 0x0015ce30: lui $a0, 0x22
    if (v1 != 0) goto label_0x15ce58;                           // 0x0015ce38: bnez $v1, 0x15ce58
    a0 = &str_002273b0;  // "E2053005: forgot free."            // 0x0015ce3c: addiu $a0, $a0, 0x73b0
label_0x15ce40:
    func_00163410();  // 163410                                // 0x0015ce40: jal 0x163410
    /* nop */                                                   // 0x0015ce44: nop 
    func_0015d400();  // 15d400                                // 0x0015ce48: jal 0x15d400
    goto label_0x15ce74;                                        // 0x0015ce50: b 0x15ce74
    v0 = -1;                                                    // 0x0015ce54: addiu $v0, $zero, -1
label_0x15ce58:
    v0 = 2 << 16;                                               // 0x0015ce58: lui $v0, 2
    *(uint32_t*)((s0) + 0xec) = v1;                             // 0x0015ce5c: sw $v1, 0xec($s0)
    goto label_0x15ce70;                                        // 0x0015ce60: b 0x15ce70
    *(uint32_t*)((s0) + 0xf0) = v0;                             // 0x0015ce64: sw $v0, 0xf0($s0)
label_0x15ce68:
    *(uint32_t*)((s0) + 0xf0) = 0;                              // 0x0015ce68: sw $zero, 0xf0($s0)
    *(uint32_t*)((s0) + 0xec) = 0;                              // 0x0015ce6c: sw $zero, 0xec($s0)
label_0x15ce70:
label_0x15ce74:
    return;                                                     // 0x0015ce84: jr $ra
    sp = sp + 0x20;                                             // 0x0015ce88: addiu $sp, $sp, 0x20
}