void func_00166158() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00166158: addiu $sp, $sp, -0x20
    a1 = 7;                                                     // 0x0016615c: addiu $a1, $zero, 7
    func_00177938();  // 177938                                // 0x00166170: jal 0x177938
    s1 = 1;                                                     // 0x00166174: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x1661b0;                          // 0x00166178: beq $v0, $s1, 0x1661b0
    func_001679c0();  // 1679c0                                // 0x00166180: jal 0x1679c0
    a1 = *(int32_t*)((s0) + 0x1c8c);                            // 0x00166184: lw $a1, 0x1c8c($s0)
    a1 = 7;                                                     // 0x0016618c: addiu $a1, $zero, 7
    if (v0 != s1) goto label_0x1661b0;                          // 0x00166190: bne $v0, $s1, 0x1661b0
    a2 = 1;                                                     // 0x00166194: addiu $a2, $zero, 1
    return func_00177920();  // Tail call                       // 0x001661a4: j 0x177920
    sp = sp + 0x20;                                             // 0x001661a8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001661ac: nop 
label_0x1661b0:
    return;                                                     // 0x001661bc: jr $ra
    sp = sp + 0x20;                                             // 0x001661c0: addiu $sp, $sp, 0x20
}