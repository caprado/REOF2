void func_0013e920() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013e920: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013e924: lui $a0, 0x22
    a0 = &str_002260c8;  // "PS2RNA_SetPcmType: not implemented\n" // 0x0013e92c: addiu $a0, $a0, 0x60c8
    return func_00116598();  // Tail call                        // 0x0013e934: j 0x116508
    sp = sp + 0x10;                                             // 0x0013e938: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013e93c: nop 
    sp = sp + -0x10;                                            // 0x0013e940: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013e944: lui $a0, 0x22
    a0 = &str_002260f0;  // "PS2RNA_SetStartSmpl: not implemented\n" // 0x0013e94c: addiu $a0, $a0, 0x60f0
    return func_00116598();  // Tail call                        // 0x0013e954: j 0x116508
    sp = sp + 0x10;                                             // 0x0013e958: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013e95c: nop 
    v0 = 0 | 0xbb80;                                            // 0x0013e960: ori $v0, $zero, 0xbb80
    *(uint32_t*)(a1) = 0;                                       // 0x0013e964: sw $zero, 0($a1)
    return;                                                     // 0x0013e968: jr $ra
    *(uint32_t*)(a2) = v0;                                      // 0x0013e96c: sw $v0, 0($a2)
}