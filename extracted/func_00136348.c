void func_00136348() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x290;                                           // 0x00136348: addiu $sp, $sp, -0x290
    s1 = sp + 0x130;                                            // 0x00136358: addiu $s1, $sp, 0x130
    func_00135790();  // 135790                                // 0x0013637c: jal 0x135790
    v0 = local_0;                                               // 0x00136384: lb $v0, 0($sp)
    if (v0 != 0) goto label_0x1363c0;                           // 0x0013638c: bnez $v0, 0x1363c0
    func_001358d8();  // 1358d8                                // 0x00136394: jal 0x1358d8
    /* nop */                                                   // 0x00136398: nop 
    a0 = 0x22 << 16;                                            // 0x0013639c: lui $a0, 0x22
    v0 = local_0;                                               // 0x001363a0: lb $v0, 0($sp)
    if (v0 != 0) goto label_0x1363c0;                           // 0x001363a4: bnez $v0, 0x1363c0
    a0 = &str_002246a0;  // "cvFsIsExistFile #3:device not found" // 0x001363a8: addiu $a0, $a0, 0x46a0
    func_00134ec0();  // 134ec0                                // 0x001363ac: jal 0x134ec0
    /* nop */                                                   // 0x001363b0: nop 
    goto label_0x1363fc;                                        // 0x001363b4: b 0x1363fc
    /* nop */                                                   // 0x001363bc: nop 
label_0x1363c0:
    func_00136ca8();  // 136ca8                                // 0x001363c4: jal 0x136ca8
    func_00135220();  // 135220                                // 0x001363cc: jal 0x135220
    /* beqzl $v0, 0x1363fc */                                   // 0x001363d4: beqzl $v0, 0x1363fc
    v0 = *(int32_t*)((v0) + 0x48);                              // 0x001363dc: lw $v0, 0x48($v0)
    if (v0 == 0) goto label_0x1363f8;                           // 0x001363e0: beqz $v0, 0x1363f8
    /* call function at address in v0 */                        // 0x001363ec: jalr $v0
label_0x1363f8:
label_0x1363fc:
    return;                                                     // 0x00136414: jr $ra
    sp = sp + 0x290;                                            // 0x00136418: addiu $sp, $sp, 0x290
}