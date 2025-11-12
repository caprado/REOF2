void func_0017cf48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017cf48: addiu $sp, $sp, -0x20
    a1 = 0x64;                                                  // 0x0017cf5c: addiu $a1, $zero, 0x64
    s0 = s0 << 2;                                               // 0x0017cf60: sll $s0, $s0, 2
    func_0017cfb8();  // 0x17cfa8                                // 0x0017cf6c: jal 0x17cfa8
    s0 = s0 + s1;                                               // 0x0017cf74: addu $s0, $s0, $s1
    *(uint32_t*)((s0) + 0x3c) = s2;                             // 0x0017cf7c: sw $s2, 0x3c($s0)
    return;                                                     // 0x0017cf8c: jr $ra
    sp = sp + 0x20;                                             // 0x0017cf90: addiu $sp, $sp, 0x20
}