void func_001dc000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x001dc000: addiu $sp, $sp, -0x30
    a1 = 2;                                                     // 0x001dc004: addiu $a1, $zero, 2
    func_001dc830();  // 1dc830                                // 0x001dc014: jal 0x1dc830
    local_2c = v0;                                              // 0x001dc01c: sw $v0, 0x2c($sp)
    v0 = local_2c;                                              // 0x001dc020: lw $v0, 0x2c($sp)
    if (v0 != 0) goto label_0x1dc05c;                           // 0x001dc024: bnez $v0, 0x1dc05c
    func_001dca18();  // 1dca18                                // 0x001dc02c: jal 0x1dca18
    a1 = sp + 0x2c;                                             // 0x001dc030: addiu $a1, $sp, 0x2c
    *(uint32_t*)((gp) + -0x6214) = v0;                          // 0x001dc034: sw $v0, -0x6214($gp)
    v0 = *(int32_t*)((gp) + -0x6214);                           // 0x001dc038: lw $v0, -0x6214($gp)
    if (v0 != 0) goto label_0x1dc05c;                           // 0x001dc03c: bnez $v0, 0x1dc05c
    /* nop */                                                   // 0x001dc040: nop 
    v0 = local_2c;                                              // 0x001dc044: lw $v0, 0x2c($sp)
    if (v0 != 0) goto label_0x1dc05c;                           // 0x001dc048: bnez $v0, 0x1dc05c
    /* nop */                                                   // 0x001dc04c: nop 
    v0 = *(int8_t*)(s0);                                        // 0x001dc050: lb $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001dc054: addiu $v0, $v0, 1
    *(uint8_t*)(s0) = v0;                                       // 0x001dc058: sb $v0, 0($s0)
label_0x1dc05c:
    v0 = 1;                                                     // 0x001dc060: addiu $v0, $zero, 1
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dc064: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dc068: jr $ra
    sp = sp + 0x30;                                             // 0x001dc06c: addiu $sp, $sp, 0x30
}