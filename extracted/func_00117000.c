void func_00117000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00117000: addiu $sp, $sp, -0x10
    if (a1 < 0) goto label_0x11701c;                            // 0x00117004: bltz $a1, 0x11701c
    v0 = *(int32_t*)((a0) + 0x20);                              // 0x0011700c: lw $v0, 0x20($a0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x00117010: slt $v0, $a1, $v0
    /* bnezl $v0, 0x11702c */                                   // 0x00117014: bnezl $v0, 0x11702c
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x00117018: lw $v1, 0x1c($a0)
label_0x11701c:
    func_00116fd0();  // 116fd0                                // 0x0011701c: jal 0x116fd0
    /* nop */                                                   // 0x00117020: nop 
    goto label_0x117038;                                        // 0x00117024: b 0x117038
    v0 = a1 << 6;                                               // 0x0011702c: sll $v0, $a1, 6
    v0 = v1 + v0;                                               // 0x00117030: addu $v0, $v1, $v0
label_0x117038:
    return;                                                     // 0x00117038: jr $ra
    sp = sp + 0x10;                                             // 0x0011703c: addiu $sp, $sp, 0x10
}