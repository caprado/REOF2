void func_001a7910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a7910: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x1a7934;                           // 0x001a7914: beqz $a0, 0x1a7934
    SetOsdConfigParam();  // 0x114330                           // 0x001a791c: jal 0x114330
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a7920: lw $a0, -0x7d58($gp)
    if (v0 >= 0) goto label_0x1a793c;                           // 0x001a7924: bgez $v0, 0x1a793c
    /* nop */                                                   // 0x001a7928: nop 
    goto label_0x1a7948;                                        // 0x001a792c: b 0x1a7948
    v0 = 1;                                                     // 0x001a7930: addiu $v0, $zero, 1
label_0x1a7934:
    PollSema();  // 0x114320                                    // 0x001a7934: jal 0x114320
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a7938: lw $a0, -0x7d58($gp)
label_0x1a793c:
    iSignalSema();  // 0x114300                                 // 0x001a793c: jal 0x114300
    a0 = *(int32_t*)((gp) + -0x7d58);                           // 0x001a7940: lw $a0, -0x7d58($gp)
label_0x1a7948:
    return;                                                     // 0x001a794c: jr $ra
    sp = sp + 0x10;                                             // 0x001a7950: addiu $sp, $sp, 0x10
}