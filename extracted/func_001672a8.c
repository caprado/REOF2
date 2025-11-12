void func_001672a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0xff00 << 16;                                          // 0x001672ac: lui $a1, 0xff00
    v0 = v1 << 3;                                               // 0x001672b0: sll $v0, $v1, 3
    sp = sp + -0x10;                                            // 0x001672b4: addiu $sp, $sp, -0x10
    v0 = v0 - v1;                                               // 0x001672b8: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001672c0: sll $v0, $v0, 2
    a3 = a0 + 0x1140;                                           // 0x001672c4: addiu $a3, $a0, 0x1140
    v0 = v0 + v1;                                               // 0x001672c8: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001672cc: sll $v0, $v0, 2
    *(uint32_t*)(a2) = 0;                                       // 0x001672d0: sw $zero, 0($a2)
    a3 = a3 + v0;                                               // 0x001672d4: addu $a3, $a3, $v0
    v1 = *(int32_t*)((a3) + 4);                                 // 0x001672d8: lw $v1, 4($a3)
    if (v1 != 0) goto label_0x1672f0;                           // 0x001672dc: bnez $v1, 0x1672f0
    a1 = a1 | 0x401;                                            // 0x001672e0: ori $a1, $a1, 0x401
    return func_00169940();  // Tail call                        // 0x001672e8: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001672ec: addiu $sp, $sp, 0x10
label_0x1672f0:
    v1 = *(int32_t*)((a3) + 0x14);                              // 0x001672f0: lw $v1, 0x14($a3)
    *(uint32_t*)(a2) = v1;                                      // 0x001672fc: sw $v1, 0($a2)
    return;                                                     // 0x00167300: jr $ra
    sp = sp + 0x10;                                             // 0x00167304: addiu $sp, $sp, 0x10
}