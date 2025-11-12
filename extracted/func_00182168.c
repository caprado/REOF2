void func_00182168() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00182168: addiu $sp, $sp, -0x20
    func_00181b18();  // 0x181a30                                // 0x00182170: jal 0x181a30
    /* nop */                                                   // 0x00182174: nop 
    if (v1 != 0) goto label_0x182198;                           // 0x0018217c: bnez $v1, 0x182198
    local_0 = v0;                                               // 0x00182180: sw $v0, 0($sp)
    func_00181dd8();  // 0x181d30                                // 0x0018218c: jal 0x181d30
    v0 = local_0;                                               // 0x00182194: lw $v0, 0($sp)
label_0x182198:
    return;                                                     // 0x0018219c: jr $ra
    sp = sp + 0x20;                                             // 0x001821a0: addiu $sp, $sp, 0x20
}