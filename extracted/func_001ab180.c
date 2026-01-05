void func_001ab180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ab180: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x63f4);                           // 0x001ab188: lw $v1, -0x63f4($gp)
    if (v1 == 0) goto label_0x1ab1c0;                           // 0x001ab18c: beqz $v1, 0x1ab1c0
    /* nop */                                                   // 0x001ab190: nop 
    v1 = *(int32_t*)((gp) + -0x63e0);                           // 0x001ab194: lw $v1, -0x63e0($gp)
    if (v1 != 0) goto label_0x1ab1b8;                           // 0x001ab198: bnez $v1, 0x1ab1b8
    /* nop */                                                   // 0x001ab19c: nop 
    func_0012ba38();  // 12ba38                                // 0x001ab1a0: jal 0x12ba38
    /* nop */                                                   // 0x001ab1a4: nop 
    v1 = *(int32_t*)((gp) + -0x63e0);                           // 0x001ab1a8: lw $v1, -0x63e0($gp)
    v1 = v1 + 1;                                                // 0x001ab1ac: addiu $v1, $v1, 1
    goto label_0x1ab1c0;                                        // 0x001ab1b0: b 0x1ab1c0
    *(uint32_t*)((gp) + -0x63e0) = v1;                          // 0x001ab1b4: sw $v1, -0x63e0($gp)
label_0x1ab1b8:
    v1 = v1 + 1;                                                // 0x001ab1b8: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x63e0) = v1;                          // 0x001ab1bc: sw $v1, -0x63e0($gp)
label_0x1ab1c0:
    return;                                                     // 0x001ab1c4: jr $ra
    sp = sp + 0x10;                                             // 0x001ab1c8: addiu $sp, $sp, 0x10
}