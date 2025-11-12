void func_001aaef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4c;
    
    sp = sp + -0x50;                                            // 0x001aaef0: addiu $sp, $sp, -0x50
    v0 = a1 << 3;                                               // 0x001aaef4: sll $v0, $a1, 3
    v0 = v0 + a0;                                               // 0x001aaefc: addu $v0, $v0, $a0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aaf04: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((v0) + 8);                                 // 0x001aaf14: lw $s0, 8($v0)
label_0x1aaf18:
    func_0011c210();  // 0x11c1f0                                // 0x001aaf24: jal 0x11c1f0
    a3 = sp + 0x4c;                                             // 0x001aaf28: addiu $a3, $sp, 0x4c
    if (v0 < 0) goto label_0x1aaf18;                            // 0x001aaf2c: bltz $v0, 0x1aaf18
    /* nop */                                                   // 0x001aaf30: nop 
    v0 = local_4c;                                              // 0x001aaf34: lw $v0, 0x4c($sp)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aaf3c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aaf40: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aaf44: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aaf48: jr $ra
    sp = sp + 0x50;                                             // 0x001aaf4c: addiu $sp, $sp, 0x50
}