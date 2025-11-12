void func_0015f938() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f938: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x0015f94c: jal 0x15fc80
    s0 = s0 ^ 1;                                                // 0x0015f954: xori $s0, $s0, 1
    a0 = 0x22 << 16;                                            // 0x0015f958: lui $a0, 0x22
    a0 = &str_00227c20;  // "E1122616 mwPlySetAudioCh: handle is invalid." // 0x0015f95c: addiu $a0, $a0, 0x7c20
    a2 = ((unsigned)0 < (unsigned)s0) ? 1 : 0;                  // 0x0015f960: sltu $a2, $zero, $s0
    if (v0 != 0) goto label_0x15f980;                           // 0x0015f964: bnez $v0, 0x15f980
    a1 = 4;                                                     // 0x0015f968: addiu $a1, $zero, 4
    return func_001634a8();  // Tail call                        // 0x0015f978: j 0x163410
    sp = sp + 0x20;                                             // 0x0015f97c: addiu $sp, $sp, 0x20
label_0x15f980:
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0015f980: lw $a0, 0x40($s1)
    return func_001750b0();  // Tail call                        // 0x0015f990: j 0x174ff8
    sp = sp + 0x20;                                             // 0x0015f994: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x0015f998: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x0015f9ac: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0015f9b4: lui $a0, 0x22
    if (v0 != 0) goto label_0x15f9d8;                           // 0x0015f9bc: bnez $v0, 0x15f9d8
    a0 = &str_00227c50;  // "E10911A mwPlySetAudioCh: Invalid ch no." // 0x0015f9c0: addiu $a0, $a0, 0x7c50
    return func_001634a8();  // Tail call                        // 0x0015f9d0: j 0x163410
    sp = sp + 0x20;                                             // 0x0015f9d4: addiu $sp, $sp, 0x20
label_0x15f9d8:
    func_00172070();  // 0x172000                                // 0x0015f9d8: jal 0x172000
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x0015f9dc: lw $a0, 0x40($s1)
    a0 = 0x22 << 16;                                            // 0x0015f9e0: lui $a0, 0x22
    if (v0 == 0) goto label_0x15fa00;                           // 0x0015f9e4: beqz $v0, 0x15fa00
    a0 = &str_00227c80;  // "E2080801 mwPlyGetNumAudioCh: handle is invalid." // 0x0015f9e8: addiu $a0, $a0, 0x7c80
    return func_001634a8();  // Tail call                        // 0x0015f9f8: j 0x163410
    sp = sp + 0x20;                                             // 0x0015f9fc: addiu $sp, $sp, 0x20
label_0x15fa00:
    return;                                                     // 0x0015fa0c: jr $ra
    sp = sp + 0x20;                                             // 0x0015fa10: addiu $sp, $sp, 0x20
}