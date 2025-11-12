void func_0017d348() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017d348: addiu $sp, $sp, -0x10
    a0 = a0 + 0x5c;                                             // 0x0017d34c: addiu $a0, $a0, 0x5c
    a1 = *(int32_t*)((a0) + 4);                                 // 0x0017d354: lw $a1, 4($a0)
    a0 = *(int32_t*)(a0);                                       // 0x0017d35c: lw $a0, 0($a0)
    return func_0017e2a8();  // Tail call                        // 0x0017d360: j 0x17e268
    sp = sp + 0x10;                                             // 0x0017d364: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d368: addiu $sp, $sp, -0x10
    a0 = a0 + 0x5c;                                             // 0x0017d36c: addiu $a0, $a0, 0x5c
    a1 = *(int32_t*)((a0) + 4);                                 // 0x0017d374: lw $a1, 4($a0)
    a0 = *(int32_t*)(a0);                                       // 0x0017d37c: lw $a0, 0($a0)
    return func_0017e2e8();  // Tail call                        // 0x0017d380: j 0x17e2a8
    sp = sp + 0x10;                                             // 0x0017d384: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d388: addiu $sp, $sp, -0x10
    a0 = a0 + 0x5c;                                             // 0x0017d38c: addiu $a0, $a0, 0x5c
    a1 = *(int32_t*)((a0) + 4);                                 // 0x0017d394: lw $a1, 4($a0)
    a0 = *(int32_t*)(a0);                                       // 0x0017d39c: lw $a0, 0($a0)
    return func_0017e360();  // Tail call                        // 0x0017d3a0: j 0x17e2e8
    sp = sp + 0x10;                                             // 0x0017d3a4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d3a8: addiu $sp, $sp, -0x10
    goto label_0x17d3c0;                                        // 0x0017d3b4: j 0x17d3c0
    sp = sp + 0x10;                                             // 0x0017d3b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017d3bc: nop 
label_0x17d3c0:
    sp = sp + -0x10;                                            // 0x0017d3c0: addiu $sp, $sp, -0x10
    s0 = 0x21 << 16;                                            // 0x0017d3cc: lui $s0, 0x21
    s0 = s0 + 0x5d48;                                           // 0x0017d3d0: addiu $s0, $s0, 0x5d48
    a2 = 0x22c;                                                 // 0x0017d3d4: addiu $a2, $zero, 0x22c
    func_00107d30();  // 0x107c70                                // 0x0017d3dc: jal 0x107c70
    v1 = 8;                                                     // 0x0017d3e4: addiu $v1, $zero, 8
    g_00215d50 = v1;  // Global at 0x00215d50                   // 0x0017d3e8: sw $v1, 8($s0)
    return func_0017e058();  // Tail call                       // 0x0017d3f8: j 0x17e058
    sp = sp + 0x10;                                             // 0x0017d3fc: addiu $sp, $sp, 0x10
    return;                                                     // 0x0017d400: jr $ra
    /* nop */                                                   // 0x0017d404: nop 
}