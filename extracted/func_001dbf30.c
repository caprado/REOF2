void func_001dbf30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001dbf30: addiu $sp, $sp, -0x50
    at = 0x33 << 16;                                            // 0x001dbf34: lui $at, 0x33
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001dbf3c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dbf44: addu.qb $zero, $sp, $s1
    v0 = g_0032fd78;  // Global at 0x0032fd78                   // 0x001dbf4c: lbu $v0, -0x288($at)
    if (v0 != 0) goto label_0x1dbf64;                           // 0x001dbf50: bnez $v0, 0x1dbf64
    *(uint8_t*)(s0) = 0;                                        // 0x001dbf58: sb $zero, 0($s0)
    goto label_0x1dbfdc;                                        // 0x001dbf5c: b 0x1dbfdc
label_0x1dbf64:
    func_001dc978();  // 0x1dc930                                // 0x001dbf6c: jal 0x1dc930
    func_001dc9c8();  // 0x1dc978                                // 0x001dbf7c: jal 0x1dc978
    a1 = 1;                                                     // 0x001dbf84: addiu $a1, $zero, 1
    *(uint32_t*)((gp) + -0x620c) = a1;                          // 0x001dbf8c: sw $a1, -0x620c($gp)
    func_001dca18();  // 0x1dc9c8                                // 0x001dbf90: jal 0x1dc9c8
    func_001dd6a8();  // 0x1dd638                                // 0x001dbfa4: jal 0x1dd638
    *(uint32_t*)((gp) + -0x6210) = 0;                           // 0x001dbfa8: sw $zero, -0x6210($gp)
    if (s3 != 0) goto label_0x1dbfd8;                           // 0x001dbfac: bnez $s3, 0x1dbfd8
    /* nop */                                                   // 0x001dbfb0: nop 
    if (s2 != 0) goto label_0x1dbfd8;                           // 0x001dbfb4: bnez $s2, 0x1dbfd8
    /* nop */                                                   // 0x001dbfb8: nop 
    if (s1 != 0) goto label_0x1dbfd8;                           // 0x001dbfbc: bnez $s1, 0x1dbfd8
    /* nop */                                                   // 0x001dbfc0: nop 
    if (v0 != 0) goto label_0x1dbfd8;                           // 0x001dbfc4: bnez $v0, 0x1dbfd8
    /* nop */                                                   // 0x001dbfc8: nop 
    v0 = *(int8_t*)(s0);                                        // 0x001dbfcc: lb $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001dbfd0: addiu $v0, $v0, 1
    *(uint8_t*)(s0) = v0;                                       // 0x001dbfd4: sb $v0, 0($s0)
label_0x1dbfd8:
    v0 = 1;                                                     // 0x001dbfd8: addiu $v0, $zero, 1
label_0x1dbfdc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001dbfe4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dbfe8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbfec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbff0: jr $ra
    sp = sp + 0x50;                                             // 0x001dbff4: addiu $sp, $sp, 0x50
}