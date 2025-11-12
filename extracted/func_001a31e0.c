void func_001a31e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001a31e0: lw $v1, 4($a0)
    goto label_0x1a3210;                                        // 0x001a31e8: b 0x1a3210
    a0 = a0 + 0xc;                                              // 0x001a31ec: addiu $a0, $a0, 0xc
label_0x1a31f0:
    v0 = *(int32_t*)(a0);                                       // 0x001a31f0: lw $v0, 0($a0)
    if (v0 != a1) goto label_0x1a3204;                          // 0x001a31f4: bne $v0, $a1, 0x1a3204
    goto label_0x1a321c;                                        // 0x001a31fc: b 0x1a321c
    /* nop */                                                   // 0x001a3200: nop 
label_0x1a3204:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a3204: lw $v0, 8($a0)
    a2 = a2 + 1;                                                // 0x001a3208: addiu $a2, $a2, 1
    a0 = a0 + v0;                                               // 0x001a320c: addu $a0, $a0, $v0
label_0x1a3210:
    v0 = ((unsigned)a2 < (unsigned)v1) ? 1 : 0;                 // 0x001a3210: sltu $v0, $a2, $v1
    if (v0 != 0) goto label_0x1a31f0;                           // 0x001a3214: bnez $v0, 0x1a31f0
    v0 = -1;                                                    // 0x001a3218: addiu $v0, $zero, -1
label_0x1a321c:
    return;                                                     // 0x001a321c: jr $ra
    /* nop */                                                   // 0x001a3220: nop 
}