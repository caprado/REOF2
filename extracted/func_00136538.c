void func_00136538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x280;                                           // 0x00136538: addiu $sp, $sp, -0x280
    if (s0 != 0) goto label_0x136560;                           // 0x00136548: bnez $s0, 0x136560
    a0 = 0x22 << 16;                                            // 0x00136550: lui $a0, 0x22
    goto label_0x1365d4;                                        // 0x00136554: b 0x1365d4
    a0 = &str_002247f0;  // "cvFsRemoveDir #2:illegal device name" // 0x00136558: addiu $a0, $a0, 0x47f0
    /* nop */                                                   // 0x0013655c: nop 
label_0x136560:
    s1 = sp + 0x130;                                            // 0x00136560: addiu $s1, $sp, 0x130
    func_001358d8();  // 0x135790                                // 0x0013656c: jal 0x135790
    v0 = local_130;                                             // 0x00136574: lb $v0, 0x130($sp)
    if (v0 != 0) goto label_0x136590;                           // 0x00136578: bnez $v0, 0x136590
    a0 = 0x22 << 16;                                            // 0x00136580: lui $a0, 0x22
    goto label_0x1365d4;                                        // 0x00136584: b 0x1365d4
    a0 = &str_002247f0;  // "cvFsRemoveDir #2:illegal device name" // 0x00136588: addiu $a0, $a0, 0x47f0
    /* nop */                                                   // 0x0013658c: nop 
label_0x136590:
    func_001355f0();  // 0x135548                                // 0x00136594: jal 0x135548
    /* bnezl $s0, 0x1365b8 */                                   // 0x001365a0: bnezl $s0, 0x1365b8
    v0 = *(int32_t*)((s0) + 0x54);                              // 0x001365a4: lw $v0, 0x54($s0)
    a0 = 0x22 << 16;                                            // 0x001365a8: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x001365ac: jal 0x134ec0
    a0 = &str_00224840;  // "cvFsRemoveDir #4:vtbl error"       // 0x001365b0: addiu $a0, $a0, 0x4840
    v0 = *(int32_t*)((s0) + 0x54);                              // 0x001365b4: lw $v0, 0x54($s0)
    /* beqzl $v0, 0x1365d0 */                                   // 0x001365b8: beqzl $v0, 0x1365d0
    a0 = 0x22 << 16;                                            // 0x001365bc: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x001365c0: jalr $v0
    goto label_0x1365e4;                                        // 0x001365c8: b 0x1365e4
    a0 = &str_00224868;  // "cvFsDeleteFile #1:illegal file name" // 0x001365d0: addiu $a0, $a0, 0x4868
label_0x1365d4:
    func_00134fb0();  // 0x134ec0                                // 0x001365d4: jal 0x134ec0
    /* nop */                                                   // 0x001365d8: nop 
    v0 = -1;                                                    // 0x001365dc: addiu $v0, $zero, -1
label_0x1365e4:
    return;                                                     // 0x001365ec: jr $ra
    sp = sp + 0x280;                                            // 0x001365f0: addiu $sp, $sp, 0x280
}