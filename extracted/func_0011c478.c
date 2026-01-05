void func_0011c478() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x70;                                            // 0x0011c478: addiu $sp, $sp, -0x70
    func_0011ba38();  // 11ba38                                // 0x0011c4a0: jal 0x11ba38
    if (v0 < 0) goto label_0x11c55c;                            // 0x0011c4a8: bltz $v0, 0x11c55c
    v0 = 0xffff << 16;                                          // 0x0011c4ac: lui $v0, 0xffff
    func_0011bb38();  // 11bb38                                // 0x0011c4b0: jal 0x11bb38
    /* nop */                                                   // 0x0011c4b4: nop 
    /* beqzl $v0, 0x11c4cc */                                   // 0x0011c4b8: beqzl $v0, 0x11c4cc
    v0 = 0x25 << 16;                                            // 0x0011c4bc: lui $v0, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011c4c0: lui $v0, 0xfffe
    goto label_0x11c55c;                                        // 0x0011c4c4: b 0x11c55c
    v0 = v0 | 0xfffc;                                           // 0x0011c4c8: ori $v0, $v0, 0xfffc
    s1 = v0 + -0x478;                                           // 0x0011c4d0: addiu $s1, $v0, -0x478
    a2 = 0xfc;                                                  // 0x0011c4d4: addiu $a2, $zero, 0xfc
    func_0010b2a0();  // 10b2a0                                // 0x0011c4dc: jal 0x10b2a0
    s0 = s1 + -8;                                               // 0x0011c4e0: addiu $s0, $s1, -8
    g_fffdfc83 = 0;  // Global at 0xfffdfc83                    // 0x0011c4e8: sb $zero, 0x103($s0)
    a0 = s1 + 0xfc;                                             // 0x0011c4ec: addiu $a0, $s1, 0xfc
    func_0010b2a0();  // 10b2a0                                // 0x0011c4f0: jal 0x10b2a0
    a2 = 0xfc;                                                  // 0x0011c4f4: addiu $a2, $zero, 0xfc
    a0 = 0x25 << 16;                                            // 0x0011c4f8: lui $a0, 0x25
    g_fffdfd7f = 0;  // Global at 0xfffdfd7f                    // 0x0011c4fc: sb $zero, 0x1ff($s0)
    a0 = a0 + -0x280;                                           // 0x0011c504: addiu $a0, $a0, -0x280
    local_0 = 0;                                                // 0x0011c508: sw $zero, 0($sp)
    t0 = 0x200;                                                 // 0x0011c514: addiu $t0, $zero, 0x200
    t2 = 0x10;                                                  // 0x0011c51c: addiu $t2, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x0011c520: jal 0x1176a8
    if (v0 >= 0) goto label_0x11c53c;                           // 0x0011c528: bgezl $v0, 0x11c53c
    v0 = g_fffdfb80;  // Global at 0xfffdfb80                   // 0x0011c52c: lw $v0, -8($s1)
    v0 = 0xfffe << 16;                                          // 0x0011c530: lui $v0, 0xfffe
    goto label_0x11c55c;                                        // 0x0011c534: b 0x11c55c
    v0 = v0 | 0xffff;                                           // 0x0011c538: ori $v0, $v0, 0xffff
label_0x11c53c:
    /* bnezl $v0, 0x11c550 */                                   // 0x0011c53c: bnezl $v0, 0x11c550
    *(uint32_t*)(s4) = v0;                                      // 0x0011c540: sw $v0, 0($s4)
    v0 = 0xfffe << 16;                                          // 0x0011c544: lui $v0, 0xfffe
    goto label_0x11c55c;                                        // 0x0011c548: b 0x11c55c
    v0 = v0 | 0xfffd;                                           // 0x0011c54c: ori $v0, $v0, 0xfffd
    v1 = g_fffdfb84;  // Global at 0xfffdfb84                   // 0x0011c554: lw $v1, 4($s0)
    *(uint32_t*)((s4) + 4) = v1;                                // 0x0011c558: sw $v1, 4($s4)
label_0x11c55c:
    return;                                                     // 0x0011c574: jr $ra
    sp = sp + 0x70;                                             // 0x0011c578: addiu $sp, $sp, 0x70
}