void func_001a6d10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a6d10: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a6d18: addu.qb $zero, $sp, $s1
label_0x1a6d2c:
    func_001174d8();  // 1174d8                                // 0x001a6d30: jal 0x1174d8
    if (v0 >= 0) goto label_0x1a6d48;                           // 0x001a6d38: bgez $v0, 0x1a6d48
    /* nop */                                                   // 0x001a6d3c: nop 
    goto label_0x1a6d68;                                        // 0x001a6d40: b 0x1a6d68
    v0 = -1;                                                    // 0x001a6d44: addiu $v0, $zero, -1
label_0x1a6d48:
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x001a6d48: lw $v0, 0x24($s1)
    if (v0 != 0) goto label_0x1a6d68;                           // 0x001a6d4c: bnez $v0, 0x1a6d68
    func_001a6c70();  // 1a6c70                                // 0x001a6d54: jal 0x1a6c70
    a0 = 1;                                                     // 0x001a6d58: addiu $a0, $zero, 1
    if (v0 >= 0) goto label_0x1a6d2c;                           // 0x001a6d5c: bgez $v0, 0x1a6d2c
    v0 = -1;                                                    // 0x001a6d64: addiu $v0, $zero, -1
label_0x1a6d68:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a6d6c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a6d70: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a6d74: jr $ra
    sp = sp + 0x30;                                             // 0x001a6d78: addiu $sp, $sp, 0x30
}