void func_001418a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001418a0: addiu $sp, $sp, -0x20
    v0 = ((unsigned)s1 < (unsigned)6) ? 1 : 0;                  // 0x001418ac: sltiu $v0, $s1, 6
    if (v0 != 0) goto label_0x1418cc;                           // 0x001418b8: bnez $v0, 0x1418cc
    a0 = 0x22 << 16;                                            // 0x001418c0: lui $a0, 0x22
    func_00141568();  // 141568                                // 0x001418c4: jal 0x141568
    a0 = &str_002264a8;  // "1071201:SVM_SetCbSvrId:illegal id" // 0x001418c8: addiu $a0, $a0, 0x64a8
label_0x1418cc:
    func_00141390();  // 141390                                // 0x001418cc: jal 0x141390
    /* nop */                                                   // 0x001418d0: nop 
    v0 = 0x25 << 16;                                            // 0x001418d4: lui $v0, 0x25
    v1 = s0 << 1;                                               // 0x001418d8: sll $v1, $s0, 1
    v0 = v0 + 0x5fa0;                                           // 0x001418dc: addiu $v0, $v0, 0x5fa0
    v1 = v1 + s0;                                               // 0x001418e0: addu $v1, $v1, $s0
    v1 = v1 << 1;                                               // 0x001418e8: sll $v1, $v1, 1
    v1 = v1 + s1;                                               // 0x001418f0: addu $v1, $v1, $s1
    v1 = v1 << 3;                                               // 0x001418f8: sll $v1, $v1, 3
    a0 = v0 + v1;                                               // 0x001418fc: addu $a0, $v0, $v1
    v1 = v1 + v0;                                               // 0x00141900: addu $v1, $v1, $v0
    *(uint32_t*)(v1) = 0;                                       // 0x00141904: sw $zero, 0($v1)
    g_002264ac = 0;  // Global at 0x002264ac                    // 0x00141908: sw $zero, 4($a0)
    return func_001413c0();  // Tail call                        // 0x0014190c: j 0x1413a8
    sp = sp + 0x20;                                             // 0x00141910: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00141914: nop 
    sp = sp + -0x30;                                            // 0x00141918: addiu $sp, $sp, -0x30
    v0 = ((unsigned)s1 < (unsigned)6) ? 1 : 0;                  // 0x00141924: sltiu $v0, $s1, 6
    if (v0 != 0) goto label_0x141954;                           // 0x00141940: bnez $v0, 0x141954
    a0 = 0x22 << 16;                                            // 0x00141948: lui $a0, 0x22
    func_00141568();  // 141568                                // 0x0014194c: jal 0x141568
    a0 = &str_002264c8;  // "1071202:SVM_SetCbSvrId:illegal svtype" // 0x00141950: addiu $a0, $a0, 0x64c8
label_0x141954:
    if (s0 < 0) goto label_0x141964;                            // 0x00141954: bltz $s0, 0x141964
    v0 = (s1 < 8) ? 1 : 0;                                      // 0x00141958: slti $v0, $s1, 8
    if (v0 != 0) goto label_0x141970;                           // 0x0014195c: bnez $v0, 0x141970
    /* nop */                                                   // 0x00141960: nop 
label_0x141964:
    a0 = 0x22 << 16;                                            // 0x00141964: lui $a0, 0x22
    func_00141568();  // 141568                                // 0x00141968: jal 0x141568
    a0 = &str_002264f0;  // "2100801:SVM_SetCbSvrId:over write callback function." // 0x0014196c: addiu $a0, $a0, 0x64f0
label_0x141970:
    func_00141390();  // 141390                                // 0x00141970: jal 0x141390
    /* nop */                                                   // 0x00141974: nop 
    a0 = 0x22 << 16;                                            // 0x00141978: lui $a0, 0x22
    v0 = s0 << 1;                                               // 0x0014197c: sll $v0, $s0, 1
    v0 = v0 + s0;                                               // 0x00141980: addu $v0, $v0, $s0
    v0 = v0 << 1;                                               // 0x00141984: sll $v0, $v0, 1
    v0 = v0 + s1;                                               // 0x00141988: addu $v0, $v0, $s1
    v0 = v0 << 3;                                               // 0x0014198c: sll $v0, $v0, 3
    s0 = 0x25 << 16;                                            // 0x00141990: lui $s0, 0x25
    s0 = s0 + 0x5fa0;                                           // 0x00141994: addiu $s0, $s0, 0x5fa0
    s0 = s0 + v0;                                               // 0x00141998: addu $s0, $s0, $v0
    v1 = g_00255fa0;  // Global at 0x00255fa0                   // 0x0014199c: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1419b0;                           // 0x001419a0: beqz $v1, 0x1419b0
    a0 = &str_00226518;  // "1071301:SVM_ExecSvrFuncId:illegal id" // 0x001419a4: addiu $a0, $a0, 0x6518
    func_00141568();  // 141568                                // 0x001419a8: jal 0x141568
    /* nop */                                                   // 0x001419ac: nop 
label_0x1419b0:
    g_00255fa4 = s2;  // Global at 0x00255fa4                   // 0x001419b0: sw $s2, 4($s0)
    g_00255fa0 = s3;  // Global at 0x00255fa0                   // 0x001419b4: sw $s3, 0($s0)
    return func_001413c0();  // Tail call                        // 0x001419cc: j 0x1413a8
    sp = sp + 0x30;                                             // 0x001419d0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x001419d4: nop 
    sp = sp + -0x20;                                            // 0x001419d8: addiu $sp, $sp, -0x20
    func_00141390();  // 141390                                // 0x001419f4: jal 0x141390
    v0 = 0x25 << 16;                                            // 0x001419fc: lui $v0, 0x25
    s0 = s0 << 3;                                               // 0x00141a00: sll $s0, $s0, 3
    v0 = v0 + 0x6120;                                           // 0x00141a04: addiu $v0, $v0, 0x6120
    v1 = v0 + s0;                                               // 0x00141a0c: addu $v1, $v0, $s0
    s0 = s0 + v0;                                               // 0x00141a10: addu $s0, $s0, $v0
    g_00255fa0 = s1;  // Global at 0x00255fa0                   // 0x00141a14: sw $s1, 0($s0)
    *(uint32_t*)((v1) + 4) = s2;                                // 0x00141a18: sw $s2, 4($v1)
    return func_001413c0();  // Tail call                        // 0x00141a28: j 0x1413a8
    sp = sp + 0x20;                                             // 0x00141a2c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00141a30: addiu $sp, $sp, -0x10
    v0 = 0x25 << 16;                                            // 0x00141a34: lui $v0, 0x25
    v0 = v0 + 0x6120;                                           // 0x00141a38: addiu $v0, $v0, 0x6120
    a0 = a0 << 3;                                               // 0x00141a3c: sll $a0, $a0, 3
    v1 = v0 + a0;                                               // 0x00141a44: addu $v1, $v0, $a0
    a0 = a0 + v0;                                               // 0x00141a48: addu $a0, $a0, $v0
    v0 = str_00226518;  // "1071301:SVM_ExecSvrFuncId:illegal id" // 0x00141a4c: lw $v0, 0($a0)
    /* beqzl $v0, 0x141a64 */                                   // 0x00141a50: beqzl $v0, 0x141a64
    /* call function at address in v0 */                        // 0x00141a58: jalr $v0
    a0 = *(int32_t*)((v1) + 4);                                 // 0x00141a5c: lw $a0, 4($v1)
    return;                                                     // 0x00141a64: jr $ra
    sp = sp + 0x10;                                             // 0x00141a68: addiu $sp, $sp, 0x10
}