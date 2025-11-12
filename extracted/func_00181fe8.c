void func_00181fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00181fe8: addiu $sp, $sp, -0x20
    func_00181a30();  // 0x181910                                // 0x00181ff0: jal 0x181910
    /* nop */                                                   // 0x00181ff4: nop 
    if (v1 != 0) goto label_0x182018;                           // 0x00181ffc: bnez $v1, 0x182018
    local_0 = v0;                                               // 0x00182000: sw $v0, 0($sp)
    func_00181dd8();  // 0x181d30                                // 0x0018200c: jal 0x181d30
    v0 = local_0;                                               // 0x00182014: lw $v0, 0($sp)
label_0x182018:
    return;                                                     // 0x0018201c: jr $ra
    sp = sp + 0x20;                                             // 0x00182020: addiu $sp, $sp, 0x20
}