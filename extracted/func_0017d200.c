void func_0017d200() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (unsigned)a2 >> 0x1f;                                  // 0x0017d200: srl $v0, $a2, 0x1f
    v1 = (unsigned)a1 >> 0x1f;                                  // 0x0017d204: srl $v1, $a1, 0x1f
    v0 = v0 + a2;                                               // 0x0017d208: addu $v0, $v0, $a2
    v1 = v1 + a1;                                               // 0x0017d20c: addu $v1, $v1, $a1
    sp = sp + -0x20;                                            // 0x0017d210: addiu $sp, $sp, -0x20
    v0 = v0 >> 1;                                               // 0x0017d214: sra $v0, $v0, 1
    v1 = v1 >> 1;                                               // 0x0017d218: sra $v1, $v1, 1
    v0 = v0 << 1;                                               // 0x0017d21c: sll $v0, $v0, 1
    v1 = v1 << 1;                                               // 0x0017d220: sll $v1, $v1, 1
    s2 = v1 >> 1;                                               // 0x0017d234: sra $s2, $v1, 1
    s1 = v0 >> 1;                                               // 0x0017d238: sra $s1, $v0, 1
    func_0017d2b0();  // 0x17d288                                // 0x0017d248: jal 0x17d288
    a0 = s0 + 4;                                                // 0x0017d24c: addiu $a0, $s0, 4
    a0 = s0 + 0x14;                                             // 0x0017d250: addiu $a0, $s0, 0x14
    func_0017d2b0();  // 0x17d288                                // 0x0017d258: jal 0x17d288
    a0 = s0 + 0x24;                                             // 0x0017d260: addiu $a0, $s0, 0x24
    goto label_0x17d288;                                        // 0x0017d27c: j 0x17d288
    sp = sp + 0x20;                                             // 0x0017d280: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017d284: nop 
label_0x17d288:
    a3 = *(int32_t*)((a0) + 4);                                 // 0x0017d288: lw $a3, 4($a0)
    v1 = *(int32_t*)(a0);                                       // 0x0017d28c: lw $v1, 0($a0)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0017d294: lw $v0, 8($a0)
    v0 = v0 - a1;                                               // 0x0017d298: subu $v0, $v0, $a1
    *(uint32_t*)((a0) + 8) = v0;                                // 0x0017d29c: sw $v0, 8($a0)
    v1 = v1 + a3;                                               // 0x0017d2a0: addu $v1, $v1, $a3
    v1 = v1 + a2;                                               // 0x0017d2a4: addu $v1, $v1, $a2
    return;                                                     // 0x0017d2a8: jr $ra
    *(uint32_t*)(a0) = v1;                                      // 0x0017d2ac: sw $v1, 0($a0)
}