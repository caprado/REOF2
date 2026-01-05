void func_001a3020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a3020: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a3028: addu.qb $zero, $sp, $s1
    func_001a31d0();  // 1a31d0                                // 0x001a3030: jal 0x1a31d0
    a1 = 0xa;                                                   // 0x001a303c: addiu $a1, $zero, 0xa
    func_001a31e0();  // 1a31e0                                // 0x001a3040: jal 0x1a31e0
    if (v0 == 0) goto label_0x1a3058;                           // 0x001a3048: beqz $v0, 0x1a3058
    goto label_0x1a30a8;                                        // 0x001a3050: b 0x1a30a8
label_0x1a3058:
    a1 = 0xa;                                                   // 0x001a3058: addiu $a1, $zero, 0xa
    func_001a3230();  // 1a3230                                // 0x001a305c: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3074;                           // 0x001a3064: bnez $v0, 0x1a3074
    /* nop */                                                   // 0x001a3068: nop 
    goto label_0x1a30a8;                                        // 0x001a306c: b 0x1a30a8
label_0x1a3074:
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a3074: lw $v1, 4($v0)
    at = ((unsigned)v1 < (unsigned)s1) ? 1 : 0;                 // 0x001a3078: sltu $at, $v1, $s1
    if (at == 0) goto label_0x1a308c;                           // 0x001a307c: beqz $at, 0x1a308c
    goto label_0x1a30a8;                                        // 0x001a3084: b 0x1a30a8
label_0x1a308c:
    func_001a3230();  // 1a3230                                // 0x001a3090: jal 0x1a3230
    a1 = -1;                                                    // 0x001a3094: addiu $a1, $zero, -1
    if (v0 != 0) goto label_0x1a30a8;                           // 0x001a3098: bnez $v0, 0x1a30a8
    /* nop */                                                   // 0x001a309c: nop 
    goto label_0x1a30a8;                                        // 0x001a30a0: b 0x1a30a8
label_0x1a30a8:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a30ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a30b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a30b4: jr $ra
    sp = sp + 0x30;                                             // 0x001a30b8: addiu $sp, $sp, 0x30
}