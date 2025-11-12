void func_0015f3d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x20;                                            // 0x0015f3d8: addiu $sp, $sp, -0x20
    a2 = *(int32_t*)((s0) + 0x110);                             // 0x0015f3f4: lw $a2, 0x110($s0)
    t0 = sp + 4;                                                // 0x0015f3f8: addiu $t0, $sp, 4
    func_00129c30();  // 0x129ad8                                // 0x0015f3fc: jal 0x129ad8
    t1 = sp + 8;                                                // 0x0015f400: addiu $t1, $sp, 8
    a0 = 0x22 << 16;                                            // 0x0015f404: lui $a0, 0x22
    if (v0 != 0) goto label_0x15f438;                           // 0x0015f408: bnez $v0, 0x15f438
    a0 = &str_00227b00;  // "E1122617 mwPlySetAudioSw: handle is invalid." // 0x0015f40c: addiu $a0, $a0, 0x7b00
    v1 = local_0;                                               // 0x0015f410: lw $v1, 0($sp)
    v0 = 1;                                                     // 0x0015f414: addiu $v0, $zero, 1
    a0 = local_4;                                               // 0x0015f418: lw $a0, 4($sp)
    a1 = local_8;                                               // 0x0015f41c: lw $a1, 8($sp)
    *(uint32_t*)((s0) + 0x118) = v0;                            // 0x0015f420: sw $v0, 0x118($s0)
    *(uint32_t*)((s0) + 0x11c) = v1;                            // 0x0015f424: sw $v1, 0x11c($s0)
    *(uint32_t*)((s0) + 0x120) = a0;                            // 0x0015f428: sw $a0, 0x120($s0)
    goto label_0x15f440;                                        // 0x0015f42c: b 0x15f440
    *(uint32_t*)((s0) + 0x124) = a1;                            // 0x0015f430: sw $a1, 0x124($s0)
    /* nop */                                                   // 0x0015f434: nop 
label_0x15f438:
    func_001634a8();  // 0x163410                                // 0x0015f438: jal 0x163410
    /* nop */                                                   // 0x0015f43c: nop 
label_0x15f440:
    return;                                                     // 0x0015f448: jr $ra
    sp = sp + 0x20;                                             // 0x0015f44c: addiu $sp, $sp, 0x20
}