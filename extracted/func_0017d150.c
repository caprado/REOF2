void func_0017d150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (unsigned)a1 >> 0x1f;                                  // 0x0017d150: srl $v0, $a1, 0x1f
    sp = sp + -0x20;                                            // 0x0017d154: addiu $sp, $sp, -0x20
    v0 = v0 + a1;                                               // 0x0017d158: addu $v0, $v0, $a1
    v0 = v0 >> 1;                                               // 0x0017d160: sra $v0, $v0, 1
    v0 = v0 << 1;                                               // 0x0017d168: sll $v0, $v0, 1
    a0 = s0 + 4;                                                // 0x0017d174: addiu $a0, $s0, 4
    func_0017d1b0();  // 0x17d1b0                               // 0x0017d17c: jal 0x17d1b0
    s1 = v0 >> 1;                                               // 0x0017d180: sra $s1, $v0, 1
    a0 = s0 + 0x14;                                             // 0x0017d184: addiu $a0, $s0, 0x14
    func_0017d1b0();  // 0x17d1b0                               // 0x0017d188: jal 0x17d1b0
    a0 = s0 + 0x24;                                             // 0x0017d190: addiu $a0, $s0, 0x24
    goto label_0x17d1b0;                                        // 0x0017d1a4: j 0x17d1b0
    sp = sp + 0x20;                                             // 0x0017d1a8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017d1ac: nop 
label_0x17d1b0:
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0017d1b0: lw $v1, 4($a0)
    a2 = *(int32_t*)(a0);                                       // 0x0017d1b4: lw $a2, 0($a0)
    /* multiply: a1 * v1 -> hi:lo */                            // 0x0017d1b8: mult $ac3, $a1, $v1
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0017d1bc: lw $v0, 8($a0)
    v0 = v0 - a1;                                               // 0x0017d1c0: subu $v0, $v0, $a1
    *(uint32_t*)((a0) + 8) = v0;                                // 0x0017d1c4: sw $v0, 8($a0)
    a2 = a2 + v1;                                               // 0x0017d1c8: addu $a2, $a2, $v1
    return;                                                     // 0x0017d1cc: jr $ra
    *(uint32_t*)(a0) = a2;                                      // 0x0017d1d0: sw $a2, 0($a0)
}