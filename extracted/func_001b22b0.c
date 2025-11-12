void func_001b22b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b22b0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b22bc: addu.qb $zero, $sp, $s1
    func_001b2530();  // 0x1b24c0                                // 0x001b22cc: jal 0x1b24c0
    if (v0 != 0) goto label_0x1b22e4;                           // 0x001b22d4: bnez $v0, 0x1b22e4
    v1 = (s0 < 0x100) ? 1 : 0;                                  // 0x001b22d8: slti $v1, $s0, 0x100
    goto label_0x1b2334;                                        // 0x001b22dc: b 0x1b2334
    v0 = -1;                                                    // 0x001b22e0: addiu $v0, $zero, -1
label_0x1b22e4:
    if (v1 != 0) goto label_0x1b22fc;                           // 0x001b22e4: bnez $v1, 0x1b22fc
    /* nop */                                                   // 0x001b22e8: nop 
    func_001b2560();  // 0x1b2530                                // 0x001b22ec: jal 0x1b2530
    /* nop */                                                   // 0x001b22f0: nop 
    goto label_0x1b2334;                                        // 0x001b22f4: b 0x1b2334
    v0 = -1;                                                    // 0x001b22f8: addiu $v0, $zero, -1
label_0x1b22fc:
    *(uint32_t*)((v0) + 0x1c) = s2;                             // 0x001b22fc: sw $s2, 0x1c($v0)
    v1 = 0x9f;                                                  // 0x001b2300: addiu $v1, $zero, 0x9f
    *(uint32_t*)((v0) + 0x18) = s1;                             // 0x001b2304: sw $s1, 0x18($v0)
    v1 = v1 - s0;                                               // 0x001b2308: subu $v1, $v1, $s0
    *(uint32_t*)((v0) + 4) = s0;                                // 0x001b230c: sw $s0, 4($v0)
    a0 = v1 << 2;                                               // 0x001b2310: sll $a0, $v1, 2
    FPU_F0 = *(float*)((gp) + -0x7fac);  // Load float          // 0x001b2314: lwc1 $f0, -0x7fac($gp)
    v1 = 0x31 << 16;                                            // 0x001b2318: lui $v1, 0x31
    v1 = v1 + -0x5d50;                                          // 0x001b231c: addiu $v1, $v1, -0x5d50
    a1 = v1 + a0;                                               // 0x001b2320: addu $a1, $v1, $a0
    func_001a5840();  // 0x1a5820                                // 0x001b2328: jal 0x1a5820
    *(float*)((v0) + 0x10) = FPU_F0;  // Store float            // 0x001b232c: swc1 $f0, 0x10($v0)
label_0x1b2334:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b2338: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b233c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b2340: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b2344: jr $ra
    sp = sp + 0x40;                                             // 0x001b2348: addiu $sp, $sp, 0x40
}