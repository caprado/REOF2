void func_00133778() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00133778: addiu $sp, $sp, -0x20
    s1 = *(int32_t*)((s0) + 8);                                 // 0x0013378c: lw $s1, 8($s0)
    if (s1 == 0) goto label_0x1337f0;                           // 0x00133790: beqz $s1, 0x1337f0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00133794: lw $a0, 4($s0)
    /* beqzl $a0, 0x1337f4 */                                   // 0x00133798: beqzl $a0, 0x1337f4
    func_0012d540();  // 12d540                                // 0x001337a0: jal 0x12d540
    /* nop */                                                   // 0x001337a4: nop 
    a1 = -1;                                                    // 0x001337a8: addiu $a1, $zero, -1
    v0 = a2 + 0x7ff;                                            // 0x001337b0: addiu $v0, $a2, 0x7ff
    v1 = (a2 < 0) ? 1 : 0;                                      // 0x001337b4: slti $v1, $a2, 0
    if (v1 != 0) a2 = v0;                                       // 0x001337b8: movn $a2, $v0, $v1
    v0 = *(int8_t*)((s0) + 0x6c);                               // 0x001337bc: lb $v0, 0x6c($s0)
    if (v0 != 0) goto label_0x1337e8;                           // 0x001337c0: bnez $v0, 0x1337e8
    func_0012d408();  // 12d408                                // 0x001337c8: jal 0x12d408
    a0 = *(int32_t*)((s0) + 4);                                 // 0x001337cc: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001337d0: lw $a0, 8($s0)
    a1 = 0x7fff << 16;                                          // 0x001337d4: lui $a1, 0x7fff
    func_00130468();  // 130468                                // 0x001337d8: jal 0x130468
    a1 = a1 | 0xffff;                                           // 0x001337dc: ori $a1, $a1, 0xffff
    goto label_0x1337f4;                                        // 0x001337e0: b 0x1337f4
label_0x1337e8:
    func_00130280();  // 130280                                // 0x001337e8: jal 0x130280
    a1 = a2 >> 0xb;                                             // 0x001337ec: sra $a1, $a2, 0xb
label_0x1337f0:
label_0x1337f4:
    return;                                                     // 0x001337fc: jr $ra
    sp = sp + 0x20;                                             // 0x00133800: addiu $sp, $sp, 0x20
}