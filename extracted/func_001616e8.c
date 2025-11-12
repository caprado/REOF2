void func_001616e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001616e8: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0xe8);                              // 0x001616f8: lw $v0, 0xe8($s0)
    if (v0 == 0) goto label_0x161730;                           // 0x001616fc: beqz $v0, 0x161730
    v1 = s0 + 0x100;                                            // 0x00161700: addiu $v1, $s0, 0x100
    v1 = *(int32_t*)(v1);                                       // 0x00161704: lw $v1, 0($v1)
    v0 = 1;                                                     // 0x00161708: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x161734;                          // 0x0016170c: beql $v1, $v0, 0x161734
    func_001618d8();  // 0x161788                                // 0x00161714: jal 0x161788
    /* nop */                                                   // 0x00161718: nop 
    return func_001619e0();  // Tail call                        // 0x00161728: j 0x161938
    sp = sp + 0x10;                                             // 0x0016172c: addiu $sp, $sp, 0x10
label_0x161730:
label_0x161734:
    return;                                                     // 0x00161738: jr $ra
    sp = sp + 0x10;                                             // 0x0016173c: addiu $sp, $sp, 0x10
}