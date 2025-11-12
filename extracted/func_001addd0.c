void func_001addd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 << 1;                                               // 0x001addd0: sll $v1, $a0, 1
    a0 = v1 + a0;                                               // 0x001addd4: addu $a0, $v1, $a0
    v1 = 0x2b << 16;                                            // 0x001addd8: lui $v1, 0x2b
    a3 = a0 << 3;                                               // 0x001adddc: sll $a3, $a0, 3
    v1 = v1 + -0x57d8;                                          // 0x001adde0: addiu $v1, $v1, -0x57d8
    v1 = v1 + a3;                                               // 0x001adde4: addu $v1, $v1, $a3
    v1 = g_002aa828;  // Global at 0x002aa828                   // 0x001adde8: lw $v1, 0($v1)
    at = (v1 < a1) ? 1 : 0;                                     // 0x001addec: slt $at, $v1, $a1
    if (at == 0) goto label_0x1addfc;                           // 0x001addf0: beqz $at, 0x1addfc
    /* nop */                                                   // 0x001addf4: nop 
label_0x1addfc:
    v1 = 0x2b << 16;                                            // 0x001addfc: lui $v1, 0x2b
    v1 = v1 + -0x57d0;                                          // 0x001ade00: addiu $v1, $v1, -0x57d0
    a0 = v1 + a3;                                               // 0x001ade04: addu $a0, $v1, $a3
    /* move to FPU: $a1, $f2 */                                 // 0x001ade08: mtc1 $a1, $f2
    v1 = 0x2b << 16;                                            // 0x001ade0c: lui $v1, 0x2b
    FPU_F1 = *(float*)(a0);  // Load float                      // 0x001ade10: lwc1 $f1, 0($a0)
    v1 = v1 + -0x57d4;                                          // 0x001ade14: addiu $v1, $v1, -0x57d4
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001ade18: cvt.s.w $f2, $f2
    a0 = v1 + a3;                                               // 0x001ade1c: addu $a0, $v1, $a3
    /* move to FPU: $a2, $f0 */                                 // 0x001ade20: mtc1 $a2, $f0
    v1 = 0x2b << 16;                                            // 0x001ade24: lui $v1, 0x2b
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x001ade28: sub.s $f1, $f2, $f1
    v1 = v1 + -0x57cc;                                          // 0x001ade2c: addiu $v1, $v1, -0x57cc
    v1 = v1 + a3;                                               // 0x001ade30: addu $v1, $v1, $a3
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001ade34: cvt.s.w $f0, $f0
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001ade38: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x001ade3c: nop 
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x001ade40: swc1 $f0, 0($a0)
    return;                                                     // 0x001ade44: jr $ra
    g_002aa834 = a1;  // Global at 0x002aa834                   // 0x001ade48: sw $a1, 0($v1)
}