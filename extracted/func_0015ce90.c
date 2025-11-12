void func_0015ce90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015ce90: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x15cf88;                           // 0x0015ce9c: beqz $s0, 0x15cf88
    func_0015f048();  // 0x15efb0                                // 0x0015cea4: jal 0x15efb0
    /* nop */                                                   // 0x0015cea8: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0015ceac: sw $zero, 4($s0)
    func_00161638();  // 0x161608                                // 0x0015ceb0: jal 0x161608
    a0 = *(int32_t*)((s0) + 0xa8);                              // 0x0015ceb8: lw $a0, 0xa8($s0)
    /* beqzl $a0, 0x15ced0 */                                   // 0x0015cebc: beqzl $a0, 0x15ced0
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x0015cec0: lw $a0, 0x4c($s0)
    func_00160850();  // 0x160838                                // 0x0015cec4: jal 0x160838
    /* nop */                                                   // 0x0015cec8: nop 
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x0015cecc: lw $a0, 0x4c($s0)
    /* beqzl $a0, 0x15cee4 */                                   // 0x0015ced0: beqzl $a0, 0x15cee4
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x0015ced4: lw $a0, 0x44($s0)
    func_0013c9c8();  // 0x13c978                                // 0x0015ced8: jal 0x13c978
    /* nop */                                                   // 0x0015cedc: nop 
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x0015cee0: lw $a0, 0x44($s0)
    /* beqzl $a0, 0x15cef8 */                                   // 0x0015cee4: beqzl $a0, 0x15cef8
    a0 = *(int32_t*)((s0) + 0x12c);                             // 0x0015cee8: lw $a0, 0x12c($s0)
    func_00164308();  // 0x164298                                // 0x0015ceec: jal 0x164298
    /* nop */                                                   // 0x0015cef0: nop 
    a0 = *(int32_t*)((s0) + 0x12c);                             // 0x0015cef4: lw $a0, 0x12c($s0)
    /* beqzl $a0, 0x15cf14 */                                   // 0x0015cef8: beqzl $a0, 0x15cf14
    a0 = *(int32_t*)((s0) + 0x14c);                             // 0x0015cefc: lw $a0, 0x14c($s0)
    v1 = str_002273d8;  // "E204161: mwPlyGetHdrInf(): NULL pointer" // 0x0015cf00: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0015cf04: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x0015cf08: jalr $v0
    /* nop */                                                   // 0x0015cf0c: nop 
    a0 = *(int32_t*)((s0) + 0x14c);                             // 0x0015cf10: lw $a0, 0x14c($s0)
    /* beqzl $a0, 0x15cf30 */                                   // 0x0015cf14: beqzl $a0, 0x15cf30
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0015cf18: lw $a0, 0x40($s0)
    v1 = str_002273d8;  // "E204161: mwPlyGetHdrInf(): NULL pointer" // 0x0015cf1c: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0015cf20: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x0015cf24: jalr $v0
    /* nop */                                                   // 0x0015cf28: nop 
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0015cf2c: lw $a0, 0x40($s0)
    if (a0 == 0) goto label_0x15cf40;                           // 0x0015cf30: beqz $a0, 0x15cf40
    /* nop */                                                   // 0x0015cf34: nop 
    func_0015c728();  // 0x15c6e0                                // 0x0015cf38: jal 0x15c6e0
    /* nop */                                                   // 0x0015cf3c: nop 
label_0x15cf40:
    func_001630d0();  // 0x163030                                // 0x0015cf40: jal 0x163030
    a0 = s0 + 0x1ec;                                            // 0x0015cf44: addiu $a0, $s0, 0x1ec
    func_0015d460();  // 0x15d400                                // 0x0015cf48: jal 0x15d400
    func_0015d488();  // 0x15d480                                // 0x0015cf50: jal 0x15d480
    if (v0 == 0) goto label_0x15cf68;                           // 0x0015cf58: beqz $v0, 0x15cf68
    a0 = 0x22 << 16;                                            // 0x0015cf5c: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015cf60: jal 0x163410
    a0 = &str_002273d8;  // "E204161: mwPlyGetHdrInf(): NULL pointer" // 0x0015cf64: addiu $a0, $a0, 0x73d8
label_0x15cf68:
    func_00107d30();  // 0x107c70                                // 0x0015cf70: jal 0x107c70
    a2 = 0x210;                                                 // 0x0015cf74: addiu $a2, $zero, 0x210
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0015cf78: sw $zero, 4($s0)
    v0 = 0x21 << 16;                                            // 0x0015cf7c: lui $v0, 0x21
    v0 = v0 + 0x42e8;                                           // 0x0015cf80: addiu $v0, $v0, 0x42e8
    *(uint32_t*)(s0) = v0;                                      // 0x0015cf84: sw $v0, 0($s0)
label_0x15cf88:
    return;                                                     // 0x0015cf90: jr $ra
    sp = sp + 0x10;                                             // 0x0015cf94: addiu $sp, $sp, 0x10
}