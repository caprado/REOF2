void func_00137f58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00137f58: addiu $sp, $sp, -0x10
    a2 = 0x20 << 16;                                            // 0x00137f5c: lui $a2, 0x20
    a1 = 1;                                                     // 0x00137f64: addiu $a1, $zero, 1
    *(uint32_t*)(v1) = v0;                                      // 0x00137f68: sw $v0, 0($v1)
    v0 = *(int32_t*)(v1);                                       // 0x00137f6c: lw $v0, 0($v1)
    if (a0 != a1) goto label_0x137f90;                          // 0x00137f70: bne $a0, $a1, 0x137f90
    g_002021fc = v0;  // Global at 0x002021fc                   // 0x00137f74: sw $v0, 0x21fc($a2)
    a0 = 0x22 << 16;                                            // 0x00137f78: lui $a0, 0x22
    a0 = &str_00224f68;  // "SRD: sceLseek64 error = %d\r\n"    // 0x00137f80: addiu $a0, $a0, 0x4f68
    return func_00116598();  // Tail call                        // 0x00137f84: j 0x116508
    sp = sp + 0x10;                                             // 0x00137f88: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00137f8c: nop 
label_0x137f90:
    return;                                                     // 0x00137f94: jr $ra
    sp = sp + 0x10;                                             // 0x00137f98: addiu $sp, $sp, 0x10
}