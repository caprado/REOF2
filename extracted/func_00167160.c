void func_00167160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00167160: sll $v0, $a1, 3
    sp = sp + -0x30;                                            // 0x00167164: addiu $sp, $sp, -0x30
    v0 = v0 - a1;                                               // 0x00167168: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167170: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00167178: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167180: sll $v0, $v0, 2
    s0 = a0 + v0;                                               // 0x00167188: addu $s0, $a0, $v0
    func_00169ba0();  // 0x169b88                                // 0x00167198: jal 0x169b88
    s0 = s0 + 0x1168;                                           // 0x0016719c: addiu $s0, $s0, 0x1168
    *(uint32_t*)((s0) + 4) = s1;                                // 0x001671a0: sw $s1, 4($s0)
    func_00169bc8();  // 0x169ba0                                // 0x001671a8: jal 0x169ba0
    *(uint32_t*)(s0) = s2;                                      // 0x001671ac: sw $s2, 0($s0)
    return;                                                     // 0x001671c0: jr $ra
    sp = sp + 0x30;                                             // 0x001671c4: addiu $sp, $sp, 0x30
}