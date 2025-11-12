void func_0011c140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0011c140: addiu $sp, $sp, -0x40
    func_0011bb38();  // 0x11ba38                                // 0x0011c150: jal 0x11ba38
    if (v0 < 0) goto label_0x11c1bc;                            // 0x0011c158: bltz $v0, 0x11c1bc
    v0 = 0xffff << 16;                                          // 0x0011c15c: lui $v0, 0xffff
    func_0011bbc8();  // 0x11bb38                                // 0x0011c160: jal 0x11bb38
    /* nop */                                                   // 0x0011c164: nop 
    if (v0 == 0) goto label_0x11c17c;                           // 0x0011c168: beqz $v0, 0x11c17c
    s0 = 0x25 << 16;                                            // 0x0011c16c: lui $s0, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011c170: lui $v0, 0xfffe
    goto label_0x11c1bc;                                        // 0x0011c174: b 0x11c1bc
    v0 = v0 | 0xfffc;                                           // 0x0011c178: ori $v0, $v0, 0xfffc
label_0x11c17c:
    a0 = 0x25 << 16;                                            // 0x0011c17c: lui $a0, 0x25
    a3 = s0 + -0x480;                                           // 0x0011c180: addiu $a3, $s0, -0x480
    g_0024fb80 = s1;  // Global at 0x0024fb80                   // 0x0011c184: sw $s1, -0x480($s0)
    a0 = a0 + -0x280;                                           // 0x0011c188: addiu $a0, $a0, -0x280
    local_0 = 0;                                                // 0x0011c18c: sw $zero, 0($sp)
    a1 = 0xa;                                                   // 0x0011c190: addiu $a1, $zero, 0xa
    t0 = 4;                                                     // 0x0011c198: addiu $t0, $zero, 4
    t2 = 4;                                                     // 0x0011c1a0: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011c1a4: jal 0x1176a8
    if (v0 >= 0) goto label_0x11c1bc;                           // 0x0011c1ac: bgezl $v0, 0x11c1bc
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011c1b0: lw $v0, -0x480($s0)
    v0 = 0xfffe << 16;                                          // 0x0011c1b4: lui $v0, 0xfffe
    v0 = v0 | 0xffff;                                           // 0x0011c1b8: ori $v0, $v0, 0xffff
label_0x11c1bc:
    return;                                                     // 0x0011c1c8: jr $ra
    sp = sp + 0x40;                                             // 0x0011c1cc: addiu $sp, $sp, 0x40
}