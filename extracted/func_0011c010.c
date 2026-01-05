void func_0011c010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0011c010: addiu $sp, $sp, -0x40
    func_0011ba38();  // 11ba38                                // 0x0011c020: jal 0x11ba38
    if (v0 < 0) goto label_0x11c08c;                            // 0x0011c028: bltz $v0, 0x11c08c
    v0 = 0xffff << 16;                                          // 0x0011c02c: lui $v0, 0xffff
    func_0011bb38();  // 11bb38                                // 0x0011c030: jal 0x11bb38
    /* nop */                                                   // 0x0011c034: nop 
    if (v0 == 0) goto label_0x11c04c;                           // 0x0011c038: beqz $v0, 0x11c04c
    s0 = 0x25 << 16;                                            // 0x0011c03c: lui $s0, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011c040: lui $v0, 0xfffe
    goto label_0x11c08c;                                        // 0x0011c044: b 0x11c08c
    v0 = v0 | 0xfffc;                                           // 0x0011c048: ori $v0, $v0, 0xfffc
label_0x11c04c:
    a0 = 0x25 << 16;                                            // 0x0011c04c: lui $a0, 0x25
    a3 = s0 + -0x480;                                           // 0x0011c050: addiu $a3, $s0, -0x480
    g_0024fb80 = s1;  // Global at 0x0024fb80                   // 0x0011c054: sw $s1, -0x480($s0)
    a0 = a0 + -0x280;                                           // 0x0011c058: addiu $a0, $a0, -0x280
    local_0 = 0;                                                // 0x0011c05c: sw $zero, 0($sp)
    a1 = 8;                                                     // 0x0011c060: addiu $a1, $zero, 8
    t0 = 4;                                                     // 0x0011c068: addiu $t0, $zero, 4
    t2 = 4;                                                     // 0x0011c070: addiu $t2, $zero, 4
    func_001176a8();  // 1176a8                                // 0x0011c074: jal 0x1176a8
    if (v0 >= 0) goto label_0x11c08c;                           // 0x0011c07c: bgezl $v0, 0x11c08c
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011c080: lw $v0, -0x480($s0)
    v0 = 0xfffe << 16;                                          // 0x0011c084: lui $v0, 0xfffe
    v0 = v0 | 0xffff;                                           // 0x0011c088: ori $v0, $v0, 0xffff
label_0x11c08c:
    return;                                                     // 0x0011c098: jr $ra
    sp = sp + 0x40;                                             // 0x0011c09c: addiu $sp, $sp, 0x40
}